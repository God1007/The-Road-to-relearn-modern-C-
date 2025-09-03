#include<iostream>
using namespace std;

int main()
{
    /*
    语法： 数据类型 变量名 = 变量初始值

    数据类型的存在意义：给变量分配合适的内存空间
    short 2B
    int 4B
    long Window：4B，Linux：8B
    long long 8B
    内存空间大小导致取值范围的大小
    */
    short a = 327; //越界了会出错
    int b = 10;
    long c = 1000;
    long long d = 10000;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    system("pause");
    return 0;

}