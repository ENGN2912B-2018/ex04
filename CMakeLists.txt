cmake_minimum_required (VERSION 3.2)

# compiler settings
set(CMAKE_CXX_COMPILER "g++")

project (Example04)

# add compiler flags
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
#set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

add_executable(main main.cpp)
