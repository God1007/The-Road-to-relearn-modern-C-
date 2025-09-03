#include<iostream>
#include<string>

using namespace std;

int main()
{
    //三目运算符返回的是变量，可以拿来赋值，如下取最大值所示
    int a = 5, b = 10, c = 6;
    int max = (a > c) ? ((a > b) ? a : b) : ((b > c) ? b : c);
    cout << "最大的数是：" << max << endl;
    (a > b ? a : b) = 20;
    c = (a > b ? a : b);
    return 0;
}