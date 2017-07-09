/* 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数 */

#include <iostream>

int main() {
    //定义两个整数变量
    int scanf_1, scanf_2;
    //提示用户输入
    std::cout << "请输入两个整数，利用while循环输出整数指定范围内的所有整数" << std::endl;
    //输入
    std::cin >> scanf_1 >> scanf_2;
    //利用循环进行输出

    while(++scanf_1 < scanf_2) {
        std::cout << scanf_1;
    }

    while(scanf_1-1 > ++scanf_2) {
        std::cout << scanf_2;
    }
}
