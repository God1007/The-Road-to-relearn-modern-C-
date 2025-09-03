#include<iostream>
//#include "xxx.h" 自定义h文件导入
using namespace std;

int add(int a,int b);

int main()
{
    //函数:返回值类型、函数名、参数表列、函数体语句、return表达式
    int a =1;
    int b =2;
    int c = add(a,b);
    cout << add(a,b) << endl;    
    return 0;
}

int add(int a,int b)
{
    return a+b;
}