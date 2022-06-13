#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "evpi_interfaces::evpi_interfaces__rosidl_typesupport_c" for configuration ""
set_property(TARGET evpi_interfaces::evpi_interfaces__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(evpi_interfaces::evpi_interfaces__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libevpi_interfaces__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libevpi_interfaces__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS evpi_interfaces::evpi_interfaces__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_evpi_interfaces::evpi_interfaces__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libevpi_interfaces__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
