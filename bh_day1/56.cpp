#include<iostream>

using namespace std;

//函数重载
//函数名可以相同，提高复用性
/*
函数重载满足条件：
1、同一个作用域下
2、函数名称相同
3、参数类型不同或者个数不同或者顺序不同

函数的返回值不可以作为函数重载的条件！！！
*/

void func()
{
    cout << "func的调用" << endl;
}

void func(int a)
{
    cout << "func的调用(int)" << endl;
}

void func(double a)
{
    cout << "func的调用（double）" <<endl;
}

void func(int a,double b)
{
    cout << "func（int + double）" << endl;
}



int main()
{
    func();
    return 0;
}