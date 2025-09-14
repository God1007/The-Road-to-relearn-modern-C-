#include<iostream>
#include<cstdint>
using namespace std;

//全局变量
int t1 = 10;
int t2 = 10;
const int t3 = 10;
const int t4 = 10;


int main()
{
    //全局区
    //创建普通局部变量（）
    int a = 10;
    int b = 10;

    //静态变量（和全局变量都在全局区）
    static int c = 10;
    static int d = 10;

    //常量
    //字符串常量(全局区)
    cout << reinterpret_cast<size_t>("Hello World") << endl;
    //const修饰的变量
    //const修饰的全局变量(全局区)
    cout << (uintptr_t)(&t3) << " " << (uintptr_t)(&t4) << endl;
    //const修饰的局部变量(局部常量和局部变量在一个内存区)
    const int e = 10;
    const int f = 10;
    cout << (uintptr_t)(&e) << " " << (uintptr_t)(&f) <<endl;

    cout << (uintptr_t)(&a) << " " << (uintptr_t)(&b) <<endl;
    cout << (uintptr_t)(&t1) << " " << (uintptr_t)(&t2) << endl;
    cout << (uintptr_t)(&c) << " " << (uintptr_t)(&d) <<endl;
    return 0;
}