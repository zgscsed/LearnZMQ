#include <iostream>
#include "zmq.h"

int main(void)
{
    // 使用zmq实现一个客户端，向服务端发送请求，并接收应答
    // 1. 创建一个context
    void *context = zmq_ctx_new();
    // 2. 创建一个socket
    void *requester = zmq_socket(context, ZMQ_REQ);
    // 3. 连接socket
    zmq_connect(requester, "tcp://127.0.0.1:5555");

    while (1)
    {
        // 4. 发送请求
        zmq_send(requester, "Hello", 5, 0);
        std::cout << "send hello " << std::endl;
        // 5. 接收应答
        char buffer[10];
        zmq_recv(requester, buffer, 10, 0);
        std::cout << "Received : " << buffer << std::endl;
    }

    // 6. 关闭socket
    zmq_close(requester);
    // 7. 终止context
    zmq_ctx_destroy(context);

    return 0;
}