#include <iostream>

int main() {
    std::cout << "/*";      //��ȷ
    std::cout << "*/";      //��ȷ��ע��
//  std::cout << /* "*/" */ //����ע����Ҫ����
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
}
