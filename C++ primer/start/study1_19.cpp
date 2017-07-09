#include <iostream>

int main() {
    int num1, num2;
    //判断第一个数是否输入
    if (std::cin >> num1) {
        //判断第二个数是否输入
        if(std::cin >> num2) {
                //提示输出范围
                std::cout << num1 << " to " << num2 << " range " << std::endl;
            //当num1大于num2的时候，循环输出范围
            while(num1 > ++num2) {
                std::cout << num2 << " ";
            }
            //当num2大于num1的时候，循环输出范围
            while(++num1 < num2-1) {
                std::cout << num1 << " ";
            }
        }
    }
    return 0;
}
