#include<iostream>

using namespace std;

//��������
//������������ͬ����߸�����
/*
������������������
1��ͬһ����������
2������������ͬ
3���������Ͳ�ͬ���߸�����ͬ����˳��ͬ

�����ķ���ֵ��������Ϊ�������ص�����������
*/

void func()
{
    cout << "func�ĵ���" << endl;
}

void func(int a)
{
    cout << "func�ĵ���(int)" << endl;
}

void func(double a)
{
    cout << "func�ĵ��ã�double��" <<endl;
}

void func(int a,double b)
{
    cout << "func��int + double��" << endl;
}



int main()
{
    func();
    return 0;
}