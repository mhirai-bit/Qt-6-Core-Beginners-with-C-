# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qt6cb-3-2-c_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qt6cb-3-2-c_autogen.dir\\ParseCache.txt"
  "qt6cb-3-2-c_autogen"
  )
endif()
