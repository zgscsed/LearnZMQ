cmake_minimum_required(VERSION 3.18)

project(src)
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

add_executable(src ${srcs})

# 将可执行文件拷贝到指定目录下
install(TARGETS src DESTINATION ${CMAKE_SOURCE_DIR}/build/src)