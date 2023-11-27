# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AED_SIM_autogen"
  "CMakeFiles/AED_SIM_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/AED_SIM_autogen.dir/ParseCache.txt"
  )
endif()
