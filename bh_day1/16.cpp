#include<iostream>
#include<string>
using namespace std;

int main()
{
    //前置递增和后置递增
    //前置递增：先加1再使用表达式
    //后置递增：先使用表达式再加1
    int a = 5;
    cout << "前置递增结果：" << ++a << endl; //先加1再输出
    cout << "后置递增结果：" << a++ << endl; //先输出再加1
    cout << "当前值：" << a << endl;
    int b1 = 10;
    int b2 = 10;
    cout << "前置递增结果：" << ++b1 * a << endl; //先加1再输出
    cout << "后置递增结果：" << b2++ * a << endl; //先输出再加1
    cout << "当前值：" << b1 << endl;
    cout << "当前值：" << b2 << endl;
}