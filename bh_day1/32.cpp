#include<iostream>
//#include "xxx.h" �Զ���h�ļ�����
using namespace std;

int add(int a,int b);

int main()
{
    //����:����ֵ���͡����������������С���������䡢return���ʽ
    int a =1;
    int b =2;
    int c = add(a,b);
    cout << add(a,b) << endl;    
    return 0;
}

int add(int a,int b)
{
    return a+b;
}