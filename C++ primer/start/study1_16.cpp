#include <iostream>

int main() {
    //定义两个浮点数变量，一个用于累加，一个用于读取一组数
    float sum = 0, val = 0;
    //提示用户输入一组数，并以^z结束
    std::cout << "please input some number: " << std::endl;
    //利用while不定循环输入
    while(std::cin >> val) {
        sum += val;
    }
    std::cout << "Sum is " << sum <<std::endl;
}
