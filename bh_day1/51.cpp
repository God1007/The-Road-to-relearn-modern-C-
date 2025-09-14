#include<iostream>
#include<string>

using namespace std;

//引用做函数的返回值
//1、不要返回局部变量的引用
int& test1()
{
    int a = 10;
    return a; //放在栈区里是会被释放掉的，最后是无效的
}

//2、函数的调用可以作为左值
int &test2()
{
    static int a = 10;//改成静态变量，放在全局区，生命周期会变长
    return a;
}


int main()
{
    //int &ref = test1();
    //cout << ref << endl;
    int &ref2 = test2();
    cout << ref2 << endl;
    test2() = 1000;
    cout << ref2 << endl;
    return 0;
}