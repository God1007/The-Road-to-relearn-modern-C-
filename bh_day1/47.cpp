#include<iostream>
#include<cstdint>
using namespace std;

int * func()
{   
    //����new���Խ����ݿ��ٵ�����
    int *a = new int (10); // new���ص��ǵ�ַ
    return a; 
}


int main()
{
    //�����ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
    //C++��Ҫ����new�ڶ����п����ڴ�
    int *p = func();
    cout << *p << endl;
    return 0;
}