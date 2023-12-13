cmake_minimum_required(VERSION 3.18)

project(src)
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

message (STATUS "mymath library found in ${ZMQ_LIBRARIES}")
message (STATUS "mymath library found in ${ZMQ_INCLUDE_DIRS}")

# 三方库目录
include_directories(${ZMQ_INCLUDE_DIRS})
# 生成可执行文件
add_executable(src ${srcs})
# 链接库
target_link_libraries(src ${ZMQ_LIBRARIES})

# 将可执行文件拷贝到指定目录下
install(TARGETS src DESTINATION ${CMAKE_SOURCE_DIR}/build/src)