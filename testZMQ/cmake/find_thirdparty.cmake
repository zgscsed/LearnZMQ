find_library(ZMQ_LIBRARIES zmq-v143-mt-gd-4_3_4 ${CMAKE_SOURCE_DIR}/testZMQ/thirdParty/zeroMQ/lib)
# 拷贝到指定目录
file(COPY "${CMAKE_SOURCE_DIR}/testZMQ/thirdParty/zeroMQ/bin/libzmq-v143-mt-gd-4_3_4.dll" DESTINATION "${CMAKE_SOURCE_DIR}/build/src")
# find_path(ZMQ_INCLUDE_DIRS NAMES zmq.h HINTS ${CMAKE_SOURCE_DIR}/testZMQ/thirdParty/zeroMQ/include)

find_file(ZMQ_INCLUDE_DIRS include ${CMAKE_SOURCE_DIR}/testZMQ/thirdParty/zeroMQ/ NO_DEFAULT_PATH )

message("result3: ${ZMQ_INCLUDE_DIRS}")
