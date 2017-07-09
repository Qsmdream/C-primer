/* 编写程序，使用while循环将50到100的整数相加 */

#include <iostream>

int main() {
    int sum = 0, val = 50;      //创建一个sum变量初始化为0，val初始化为50
    //val小于等于100的时候，val进行赋值累加到sum
    while(val <= 100) {
        sum += val;         //累加val的值
        ++val;              //前缀递增运算符
    }
    std::cout << "sum of 50 to 100 inclusive is " << sum << std::endl;
}
