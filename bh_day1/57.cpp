#include<iostream>

using namespace std;


void func(int &a)
{
    cout << "func(int&a)����" << endl;
}

void func(const int &a)
{
    cout << "func(const int&a)����" << endl;
}

void func2(int a, int b) //�����func2(int a,int b =10)�Ļ��������func(10)�ͻ�����غ�������������
{
    cout << "func2(int a, int b)" << endl;
}

void func2(int a)
{
    cout << "func2(int a,)" << endl;
}


//�﷨��û�������
int main()
{
    //�������ص�ע������
    //1��������Ϊ���ص�����
    //2��������������Ĭ�ϲ���
    const int a = 10;
    func(10);
    func(a);
    int b = 10;
    func(b);
    func2(a,b);
    return 0;
}