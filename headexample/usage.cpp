#include "swap.h"
#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    
    cout << "����ǰ - main������: a = " << a << ", b = " << b << endl;
    
    swap(a, b);  // ֵ���ݣ�����ı�ʵ�ʲ���
    
    cout << "������ - main������: a = " << a << ", b = " << b << endl;
    cout << "˵����ֵ���ݲ���ı�ԭʼ������ֵ��" << endl;
    
    return 0;
}