/* ��д����ʹ��whileѭ����50��100��������� */

#include <iostream>

int main() {
    int sum = 0, val = 50;      //����һ��sum������ʼ��Ϊ0��val��ʼ��Ϊ50
    //valС�ڵ���100��ʱ��val���и�ֵ�ۼӵ�sum
    while(val <= 100) {
        sum += val;         //�ۼ�val��ֵ
        ++val;              //ǰ׺���������
    }
    std::cout << "sum of 50 to 100 inclusive is " << sum << std::endl;
}
