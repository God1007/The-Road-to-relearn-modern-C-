#include<iostream>
#include<string>

using namespace std;

//常量引用:主要用来修饰形参，防止误操作
//在函数形参列表中，可以用const修饰形参，防止形参改变实参

void showvalue(const int &a){
    cout << a << endl;
    // a = 1000;
}

int main()
{
    //int a = 10;
    //int &ref = a; //不能写int &ref = 10
    //const int &ref2 = 10;//加上const之后，编译器将代码修改为int temp = 10; int &ref2 = temp
    //↑ 编译器会自己优化代码
    //此时的ref2之后变为只读，不可修改
    int a =100;
    showvalue(a);
    cout << a <<endl;
    return 0;
}