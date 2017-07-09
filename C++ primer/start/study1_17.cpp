#include <iostream>

int main() {
    int currVal = 0, Val = 0;
    //判断输入的第一个数是否为空
    if(std::cin >> currVal) {
        int cnt = 1;
        //读取剩余的数
        while(std::cin >> Val) {
            if(currVal == Val) {
                ++cnt;
            }
            else {
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = Val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}

