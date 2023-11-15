cmake_minimum_required(VERSION 3.18)

project(testZMQ)
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)


add_subdirectory(src)