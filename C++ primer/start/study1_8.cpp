#include <iostream>

int main() {
    std::cout << "/*";      //正确
    std::cout << "*/";      //正确的注释
//  std::cout << /* "*/" */ //错误注释需要改正
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
}
