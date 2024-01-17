cmake_minimum_required(VERSION 3.18)

# project(testZmq)
# file(GLOB_RECURSE srcs CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

# 三方库目录
include_directories(${ZMQ_INCLUDE_DIRS})
# # 生成可执行文件
# add_executable(testZmq ${srcs})
# # 链接库
# target_link_libraries(testZmq ${ZMQ_LIBRARIES})

# # 将可执行文件拷贝到指定目录下
# install(TARGETS testZmq DESTINATION ${CMAKE_SOURCE_DIR}/build/src)

# cmake 一个文件生成一个可执行文件
add_executable(server server.cpp)
target_link_libraries(server ${ZMQ_LIBRARIES})
install(TARGETS server DESTINATION ${CMAKE_SOURCE_DIR}/build/src)

# cmake 一个文件生成一个可执行文件
add_executable(client client.cpp)
target_link_libraries(client ${ZMQ_LIBRARIES})
install(TARGETS client DESTINATION ${CMAKE_SOURCE_DIR}/build/src)
