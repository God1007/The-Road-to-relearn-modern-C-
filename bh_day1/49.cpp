#include<iostream>
#include<cstdint>

using namespace std;

int main()
{
    //���ã������������
    //�﷨���������� & ���� = ԭ��
    //���ñ����ʼ�������ڳ�ʼ��֮�󲻿ɸı� 
    int a;
    int &b = a;
    b = 20;
    cout << a <<endl;
    int c =10;
    b = c; //��ֵ�����ǿ��Եģ����ǲ���ת�����Ŀ��
    cout << a << " " << b << " " << c <<endl;
    return 0;
}