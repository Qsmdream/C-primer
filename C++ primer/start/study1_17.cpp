#include <iostream>

int main() {
    int currVal = 0, Val = 0;
    //�ж�����ĵ�һ�����Ƿ�Ϊ��
    if(std::cin >> currVal) {
        int cnt = 1;
        //��ȡʣ�����
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

