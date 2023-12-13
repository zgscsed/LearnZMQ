cmake_minimum_required(VERSION 3.18)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake;${CMAKE_MODULE_PATH}")

# 创建目录
file(MAKE_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/build/src")

project(LearnZMQ LANGUAGES CXX)

# include(MyUsefulFuncs)

add_subdirectory(testZMQ)
# add_subdirectory(biology)