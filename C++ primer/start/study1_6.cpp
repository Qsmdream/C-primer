#include <iostream>

int main() {
    int v1 = 13;
    int v2 = 14;
    std::cout << "The sum of " << v1;       //没有定义v1变量
    std::cout << " and " << v2;             //左侧没有ostream对象，没有定义v2变量
    std::cout<< " is " << v1 + v2 << std::endl;      //左侧没有istream对象
}
