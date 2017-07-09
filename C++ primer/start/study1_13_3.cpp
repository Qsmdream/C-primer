
#include <iostream>

int main() {
    //定义两个整数输入变量
    int val1, val2;
    //提示用户输入变量
    std::cout << "请输入两个整数，即将打印两个整数之间的内容 " << std::endl;
    //std::cin输入

    //利用for循环输出指定范围内所有整数
    for(std::cin >> val1 >> val2;++val1 < val2; ) {
        std::cout << val1;
    }
    for(; val1-1 > ++val2; ) {
        std::cout << val2;
    }
}
