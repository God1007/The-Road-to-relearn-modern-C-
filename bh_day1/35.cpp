#include<iostream>
using namespace std;

int main()
{
    //空指针:指向内存中编号为0的空间，用于初始化，空指针指向的内存是不可访问的
    int *p = NULL;
    // 不能直接写*p = 100（0~255的内存编号是系统占用的，不可访问）;
    int a = 100;
    p = &a;
    *p = 1000;
    cout << a << endl;
    return 0;
    //野指针：指向非法内存空间
    //int *p = (int *)0x1011;
    
}