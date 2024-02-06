# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ScanConversions_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ScanConversions_autogen.dir\\ParseCache.txt"
  "ScanConversions_autogen"
  )
endif()
