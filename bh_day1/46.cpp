#include<iostream>
#include<cstdint>
using namespace std;

int* fun(int b) //形参数据也会放在栈区
{
    b = 100;
    int a = 10; //因为栈区的数据在函数执行完后自动释放了
    return &b;
}

int main()
{
    //栈区数据的注意事项
    //栈区的数据由编译器管理开辟和释放
    //不要返回局部变量的地址
    int *p = fun(1);
    cout << *p << endl;
    return 0;
}