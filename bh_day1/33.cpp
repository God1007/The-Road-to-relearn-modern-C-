#include<iostream>
using namespace std;

int main()
{
    //指针: 数据类型 * 指针变量
    int a =10;
    int *p;
    p = &a; //取址
    int b = *p; //解引用
    *p = 1000;
    cout << p << endl;
    cout << b << endl;
    cout << a << endl;
    return 0;
}