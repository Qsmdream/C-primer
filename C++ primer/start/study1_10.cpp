#include <iostream>

/*递减运算符 实现将值减少1，使用递减运算符在循环中按递减顺序打印出10到0之间的整数 */

int main() {
    int v1 = 0, v2 = 10;
    while (--v2 > v1) {
        std::cout << "每次递减的值为 " << v2 << std::endl;
    }
}


