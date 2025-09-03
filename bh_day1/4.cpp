#include<iostream>
using namespace std;

#define pi 3.14

int main()
{
    // 常量的意义：记录程序中不可更改的数据
    /*
    1、#define宏常量，文件上方定义， 常量名 常量值
    2、const修饰的变量 const 数据类型 常量名 = 常量值
    */
    const int a = 10;
    cout << "a=" << a << endl;
    cout << "pi=" << pi << endl;
    float r = 3.0;
    float area = 0.0;
    area = pi * r * r;
    cout << "area=" << area << endl;

    system("pause");
    return 0;


}