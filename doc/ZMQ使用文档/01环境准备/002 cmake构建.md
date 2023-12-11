## cmake构建项目

### 准备

1、安装cmake，设置环境变量（不清楚可以网上搜索）。
2、下载mingw，使用mingw编译，网上很多参考 https://blog.csdn.net/xijinno1/article/details/131199311


### cmake介绍

CMake是一个跨平台、开源的构建系统。它是一个集软件构建、测试、打包于一身的软件。使用与平台和编译器独立的配置文件来对软件编译过程进行控制。


cmake语法比较多，单独开一个文档记录。 下面是一个最简单的cmake构建

```bash
cmake_minimum_required(VERSION 3.18)

project(src)
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

add_executable(src ${srcs})
```

### 编译命令

需要指定使用mingw

```bash
mkdir build
cd build
cmake -G "MinGW Makefiles" ..

```