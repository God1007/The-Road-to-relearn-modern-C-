#include<iostream>
#include<string>
using namespace std;

int main()
{
    //���������Ľ��Ϊ0��1��bool����
    int a = 10;
    cout << typeid(a > 5).name() << endl;
    int b = 20;
    cout << (a == b) << endl; //���С������Ϊ������˳��
    return 0;
}