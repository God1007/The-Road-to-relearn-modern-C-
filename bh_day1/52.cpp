#include<iostream>

using namespace std;

//引用的本质是在C++内部里的一个指针常量

int main()
{
    int a = 10;
    int &ref = a;
    //发现是引用，转换为int* const ref = &a
    
}