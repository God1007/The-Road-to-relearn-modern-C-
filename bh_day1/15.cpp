#include<iostream>
#include<string>
using namespace std;

int main()
{
    //算术运算符
    //两个小数不能取模运算
    int a = 5;
    int b = 10;
    int c = 2;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl; //整数除法
    cout << "a % b = " << a % b << endl; //取余运算
    cout << "a / c = " << a / c << endl; //整数除法
    float d = 5.2f;
    float e = 10.3f;
    float f = 2.6f;
    cout << "d + e = " << d + e << endl;
    cout << "d - e = " << d - e << endl;
    cout << "d * e = " << d * e << endl;
    cout << "d / e = " << d / e << endl; //浮点数除法
    cout << "d / f = " << d / f << endl; //浮点数除法
    cout << typeid(d*f).name() << endl;
    return 0;
}