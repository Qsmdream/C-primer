#include <iostream>
/* 利用while 语句编写一段程序，求1到10这10个数之和 */
int main() {
    int sum = 0, val = 1;
    //只要val的值小于等于10，while循环就会持续进行
    while(val <= 10) {
        sum += val;     //将sum + val 赋值给sum
        ++val;          //将val加1
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;

}
