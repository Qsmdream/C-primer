/* ��д������ʾ�û�����������������ӡ��������������ָ���ķ�Χ�ڵ��������� */

#include <iostream>

int main() {
    //����������������
    int scanf_1, scanf_2;
    //��ʾ�û�����
    std::cout << "��������������������whileѭ���������ָ����Χ�ڵ���������" << std::endl;
    //����
    std::cin >> scanf_1 >> scanf_2;
    //����ѭ���������

    while(++scanf_1 < scanf_2) {
        std::cout << scanf_1;
    }

    while(scanf_1-1 > ++scanf_2) {
        std::cout << scanf_2;
    }
}
