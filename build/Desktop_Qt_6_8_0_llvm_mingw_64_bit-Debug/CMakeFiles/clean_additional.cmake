# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LAB4_bryan_restoDeEjercicios_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LAB4_bryan_restoDeEjercicios_autogen.dir\\ParseCache.txt"
  "LAB4_bryan_restoDeEjercicios_autogen"
  )
endif()
