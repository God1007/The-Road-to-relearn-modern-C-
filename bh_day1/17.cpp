#include<iostream>
#include<string>
using namespace std;

int main()
{
    //表达运算符的结果为0或1的bool类型
    int a = 10;
    cout << typeid(a > 5).name() << endl;
    int b = 20;
    cout << (a == b) << endl; //添加小括号是为了运算顺序
    return 0;
}