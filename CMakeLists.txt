# CMakeList.txt : CMake project for sfml-2d, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("sfml-2d")

# Add source to this project's executable.
add_executable (sfml-2d "sfml-2d.cpp" "sfml-2d.h")

# TODO: Add tests and install targets if needed.
target_link_libraries (sfml-2d 
	${CMAKE_SOURCE_DIR}/library/sfml-graphics.lib
	${CMAKE_SOURCE_DIR}/library/sfml-audio.lib
	${CMAKE_SOURCE_DIR}/library/sfml-network.lib
	${CMAKE_SOURCE_DIR}/library/sfml-system.lib
	${CMAKE_SOURCE_DIR}/library/sfml-window.lib
)

include_directories (${CMAKE_SOURCE_DIR}/include)

set_property (TARGET sfml-2d PROPERTY CXX_STANDARD 17)
set_property (TARGET sfml-2d PROPERTY CX__STANDARD)