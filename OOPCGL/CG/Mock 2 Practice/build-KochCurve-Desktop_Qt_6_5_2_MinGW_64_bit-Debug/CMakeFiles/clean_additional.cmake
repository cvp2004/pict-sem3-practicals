# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\KochCurve_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\KochCurve_autogen.dir\\ParseCache.txt"
  "KochCurve_autogen"
  )
endif()
