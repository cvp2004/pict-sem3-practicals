# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "45_autogen"
  "CMakeFiles\\45_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\45_autogen.dir\\ParseCache.txt"
  )
endif()
