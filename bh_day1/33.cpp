#include<iostream>
using namespace std;

int main()
{
    //ָ��: �������� * ָ�����
    int a =10;
    int *p;
    p = &a; //ȡַ
    int b = *p; //������
    *p = 1000;
    cout << p << endl;
    cout << b << endl;
    cout << a << endl;
    return 0;
}