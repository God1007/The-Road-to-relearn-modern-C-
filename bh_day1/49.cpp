#include<iostream>
#include<cstdint>

using namespace std;

int main()
{
    //引用：给变量起别名
    //语法：数据类型 & 别名 = 原名
    //引用必须初始化，且在初始化之后不可改变 
    int a;
    int &b = a;
    b = 20;
    cout << a <<endl;
    int c =10;
    b = c; //赋值操作是可以的，但是不能转换替代目标
    cout << a << " " << b << " " << c <<endl;
    return 0;
}