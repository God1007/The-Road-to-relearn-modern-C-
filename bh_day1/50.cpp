#include<iostream>

using namespace std;

    //引用做函数参数
    //交换函数
    //1、值传递
void swap1(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

    //2、地址传递
void swap2(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

    //3、引用传递,形参会修饰实参
void swap3(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a =10,b=20;
    swap1(a,b);
    cout << a << " " << b <<endl;
    swap2(&a,&b);
    cout << a << " " << b <<endl;
    swap3(a,b);
    cout << a << " " << b <<endl;
    return 0;
}