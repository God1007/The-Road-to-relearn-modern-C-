#include<iostream>
#include<cstdint>
using namespace std;

int* fun(int b) //�β�����Ҳ�����ջ��
{
    b = 100;
    int a = 10; //��Ϊջ���������ں���ִ������Զ��ͷ���
    return &b;
}

int main()
{
    //ջ�����ݵ�ע������
    //ջ���������ɱ����������ٺ��ͷ�
    //��Ҫ���ؾֲ������ĵ�ַ
    int *p = fun(1);
    cout << *p << endl;
    return 0;
}