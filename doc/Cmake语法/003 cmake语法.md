## cmake 语法

### 介绍
CMake是一个跨平台、开源的构建系统。它是一个集软件构建、测试、打包于一身的软件。使用与平台和编译器独立的配置文件来对软件编译过程进行控制。


### 变量
```bash
CMAKE_CURRENT_SOURCE_DIR： 当前cmakelists.txt的目录
CMAKE_SOURCE_DIR:          项目根目录地址，最上层cmakelists.txt文件所在的目录
```
### 命令

#### install命令
```bash
# 将targets文件拷贝到指定目录
install(TARGETS src DESTINATION ${CMAKE_SOURCE_DIR}/build/src)
```

install 命令详细介绍：https://zhuanlan.zhihu.com/p/661283021



### 参考文档
cmake语法文档是一个比较好的cmake语法总结:https://zhuanlan.zhihu.com/p/470681241。



