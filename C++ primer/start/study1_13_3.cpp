
#include <iostream>

int main() {
    //�������������������
    int val1, val2;
    //��ʾ�û��������
    std::cout << "����������������������ӡ��������֮������� " << std::endl;
    //std::cin����

    //����forѭ�����ָ����Χ����������
    for(std::cin >> val1 >> val2;++val1 < val2; ) {
        std::cout << val1;
    }
    for(; val1-1 > ++val2; ) {
        std::cout << val2;
    }
}
