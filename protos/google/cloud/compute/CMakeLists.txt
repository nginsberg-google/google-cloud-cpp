# ~~~
# Copyright 2023 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

# Defines a compute proto library and installs the .proto and .pb.h files.
function (compute_proto_library dir library)
    cmake_parse_arguments(_opt "" "" "DEPS" ${ARGN})
    file(
        GLOB proto_files
        LIST_DIRECTORIES false
        RELATIVE_PATH "${CMAKE_CURRENT_SOURCE_DIR}" "${dir}*.proto")
    list(SORT proto_files)
    google_cloud_cpp_proto_library(
        "${library}" "${proto_files}" PROTO_PATH_DIRECTORIES
        "${EXTERNAL_GOOGLEAPIS_SOURCE}" "${PROTO_INCLUDE_DIR}"
        "${PROJECT_SOURCE_DIR}/protos")
    set_target_properties(${library} PROPERTIES OUTPUT_NAME
                                                "google_cloud_cpp_${library}")
    add_library(google-cloud-cpp::${library} ALIAS ${library})
    set_target_properties(
        ${library}
        PROPERTIES EXPORT_NAME google-cloud-cpp::${library}
                   VERSION "${PROJECT_VERSION}"
                   SOVERSION "${PROJECT_VERSION_MAJOR}")
    target_link_libraries(${library} PUBLIC ${_opt_DEPS})
    # Some files are too big for the MSVC defaults.
    if (MSVC)
        target_compile_options("${library}" PRIVATE "/bigobj")
    endif ()
    google_cloud_cpp_install_proto_library_protos(
        "${library}" "${PROJECT_SOURCE_DIR}/protos")
    google_cloud_cpp_install_proto_library_headers("${library}")

    # In some configs we need to only generate the protocol definitions from
    # `*.proto` files. We achieve this by having this target depend on all proto
    # libraries. It has to be defined at the top level of the project.
    add_dependencies(google-cloud-cpp-protos ${library})
    add_dependencies("${library}" googleapis_download)
endfunction ()

include(${PROJECT_SOURCE_DIR}/google/cloud/compute/service_dirs.cmake)

include(GoogleapisConfig)
include(CompileProtos)
google_cloud_cpp_find_proto_include_dir(PROTO_INCLUDE_DIR)
google_cloud_cpp_load_protodeps(
    deps "${PROJECT_SOURCE_DIR}/external/googleapis/protodeps/compute.deps")

compute_proto_library("v1/internal/" "compute_internal_protos" DEPS "${deps}")

foreach (dir IN LISTS service_dirs operation_service_dirs)
    string(REPLACE "/v1/" "" short_dir "${dir}")
    compute_proto_library(
        ${dir} "compute_${short_dir}_protos" PROTO_FILES
        "${${short_dir}_proto_files}" DEPS compute_internal_protos)
    list(APPEND compute_proto_lib_targets "compute_${short_dir}_protos")
endforeach ()

# Get the destination directories based on the GNU recommendations.
include(GNUInstallDirs)

# Export the CMake targets to make it easy to create configuration files.
install(
    EXPORT google_cloud_cpp_compute_protos-targets
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/google_cloud_cpp_compute_protos"
    COMPONENT google_cloud_cpp_development)

# Install the libraries and headers in the locations determined by
# GNUInstallDirs
install(
    TARGETS ${compute_proto_lib_targets} compute_internal_protos
    EXPORT google_cloud_cpp_compute_protos-targets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
            COMPONENT google_cloud_cpp_runtime
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_runtime
            NAMELINK_COMPONENT google_cloud_cpp_development
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development)

# Create and install the CMake configuration files.
include(CMakePackageConfigHelpers)
configure_file("config.cmake.in" "google_cloud_cpp_compute_protos-config.cmake"
               @ONLY)
write_basic_package_version_file(
    "google_cloud_cpp_compute_protos-config-version.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY ExactVersion)

install(
    FILES
        "${CMAKE_CURRENT_BINARY_DIR}/google_cloud_cpp_compute_protos-config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/google_cloud_cpp_compute_protos-config-version.cmake"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/google_cloud_cpp_compute_protos"
    COMPONENT google_cloud_cpp_development)

google_cloud_cpp_add_pkgconfig(
    "compute_internal_protos" "The Cloud Compute API C++ Client Library"
    "Provides C++ APIs to use the Cloud Compute API." WITH_SHORT_TARGET
    "google_cloud_cpp_cloud_extended_operations_protos")

foreach (dir IN LISTS service_dirs operation_service_dirs)
    string(REPLACE "/v1/" "" short_dir "${dir}")
    google_cloud_cpp_add_pkgconfig(
        "compute_${short_dir}_protos"
        "The Cloud Compute API C++ Client Library"
        "Provides C++ APIs to use the Cloud Compute API."
        WITH_SHORT_TARGET
        "google_cloud_cpp_compute_internal_protos"
        "google_cloud_cpp_api_annotations_protos"
        "google_cloud_cpp_api_client_protos"
        "google_cloud_cpp_api_field_behavior_protos")
endforeach ()
