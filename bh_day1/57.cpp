#include<iostream>

using namespace std;


void func(int &a)
{
    cout << "func(int&a)调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int&a)调用" << endl;
}

void func2(int a, int b) //如果是func2(int a,int b =10)的话，如果是func(10)就会和重载函数产生二义性
{
    cout << "func2(int a, int b)" << endl;
}

void func2(int a)
{
    cout << "func2(int a,)" << endl;
}


//语法是没有问题的
int main()
{
    //函数重载的注意事项
    //1、引用作为重载的条件
    //2、函数重载碰到默认参数
    const int a = 10;
    func(10);
    func(a);
    int b = 10;
    func(b);
    func2(a,b);
    return 0;
}