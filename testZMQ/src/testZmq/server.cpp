#include <iostream>
#include "zmq.h"

// use zmq to send and receive message
// 1. create a context
// 2. create a socket
// 3. bind or connect
// 4. send or receive
// 5. close socket
// 6. terminate context
// code example:


int main(void)
{
    std::cout << "hello world!"<<std::endl;
    
    // 实现服务端，等待请求，收到后回复应答
    // 1. 创建一个context
    void *context = zmq_ctx_new();
    // 2. 创建一个socket
    void *responder = zmq_socket(context, ZMQ_REP);
    // 3. 绑定socket
    zmq_bind(responder, "tcp://127.0.0.1:5555");

    while (1)
    {
        // 4. 接收请求
        char buffer[10];
        zmq_recv(responder, buffer, 10, 0);
        std::cout << "Received :" <<buffer << std::endl;
        // 5. 发送应答
        zmq_send(responder, "World", 5, 0);

        std::cout << "send hello" << std::endl;
    }


    // 6. 关闭socket
    zmq_close(responder);
    // 7. 终止context
    zmq_ctx_destroy(context);

    return 0;
}                          

