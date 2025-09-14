#include<iostream>
#include<cstdint>
using namespace std;

int * func()
{   
    //利用new可以将数据开辟到堆区
    int *a = new int (10); // new返回的是地址
    return a; 
}


int main()
{
    //堆区由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
    //C++主要利用new在堆区中开辟内存
    int *p = func();
    cout << *p << endl;
    return 0;
}