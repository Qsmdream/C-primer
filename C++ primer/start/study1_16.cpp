#include <iostream>

int main() {
    //��������������������һ�������ۼӣ�һ�����ڶ�ȡһ����
    float sum = 0, val = 0;
    //��ʾ�û�����һ����������^z����
    std::cout << "please input some number: " << std::endl;
    //����while����ѭ������
    while(std::cin >> val) {
        sum += val;
    }
    std::cout << "Sum is " << sum <<std::endl;
}
