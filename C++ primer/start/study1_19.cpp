#include <iostream>

int main() {
    int num1, num2;
    //�жϵ�һ�����Ƿ�����
    if (std::cin >> num1) {
        //�жϵڶ������Ƿ�����
        if(std::cin >> num2) {
                //��ʾ�����Χ
                std::cout << num1 << " to " << num2 << " range " << std::endl;
            //��num1����num2��ʱ��ѭ�������Χ
            while(num1 > ++num2) {
                std::cout << num2 << " ";
            }
            //��num2����num1��ʱ��ѭ�������Χ
            while(++num1 < num2-1) {
                std::cout << num1 << " ";
            }
        }
    }
    return 0;
}
