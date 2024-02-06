# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "21465_Assign1_autogen"
  "CMakeFiles\\21465_Assign1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\21465_Assign1_autogen.dir\\ParseCache.txt"
  )
endif()
