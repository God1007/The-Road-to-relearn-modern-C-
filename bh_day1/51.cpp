#include<iostream>
#include<string>

using namespace std;

//�����������ķ���ֵ
//1����Ҫ���ؾֲ�����������
int& test1()
{
    int a = 10;
    return a; //����ջ�����ǻᱻ�ͷŵ��ģ��������Ч��
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int &test2()
{
    static int a = 10;//�ĳɾ�̬����������ȫ�������������ڻ�䳤
    return a;
}


int main()
{
    //int &ref = test1();
    //cout << ref << endl;
    int &ref2 = test2();
    cout << ref2 << endl;
    test2() = 1000;
    cout << ref2 << endl;
    return 0;
}