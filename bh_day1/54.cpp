#include<iostream>
#include<string>

using namespace std;

//函数提高
//在C++中，函数的形参列表中的形参是可以有默认值的
//语法：返回值类型 函数名 （参数=默认值）{}

int func(int a, int b=20 ,int c = 30)
{
    return a + b + c;
}

//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右，都必须要有默认
//2、如果函数的声明有默认参数，那函数的实现就不能有默认参数了，二者只能有一个有默认参数，不然会有二义性

int func2(int a,int b);//声明
int func2(int a,int b){//实现
    return a+b;
}

int main(){
    cout << func(10);
    return 0;
}