# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_testing_dm_hby_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED testing_dm_hby_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(testing_dm_hby_FOUND FALSE)
  elseif(NOT testing_dm_hby_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(testing_dm_hby_FOUND FALSE)
  endif()
  return()
endif()
set(_testing_dm_hby_CONFIG_INCLUDED TRUE)

# output package information
if(NOT testing_dm_hby_FIND_QUIETLY)
  message(STATUS "Found testing_dm_hby: 1.0.0 (${testing_dm_hby_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'testing_dm_hby' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${testing_dm_hby_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(testing_dm_hby_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${testing_dm_hby_DIR}/${_extra}")
endforeach()
