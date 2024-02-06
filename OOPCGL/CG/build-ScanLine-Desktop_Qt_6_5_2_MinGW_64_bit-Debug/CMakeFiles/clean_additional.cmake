# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ScanLine_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ScanLine_autogen.dir\\ParseCache.txt"
  "ScanLine_autogen"
  )
endif()
