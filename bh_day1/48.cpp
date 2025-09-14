#include<iostream>
#include<cstdint>

using namespace std;

int* func()
{
    int *p = new int(10); //返回的数据类型是指针
    return p;
}

void tets1()
{
    int *p = func();
    cout << *p << endl;
    //堆区的数据由程序员管理
    // delete p;
    cout << *p << endl;
}

//堆区开辟数组
void test2()
{
    //创建10整型数据的数组，在堆区
    int *arr = new int[10]; //中括号是数组，小括号是单个元素,返回的是指针，指向这个数组的第一个元素
    for(int i =0;i<10;i++)
    {
        arr[i] = 100+i;
    }
    for(int j =0;j<10;j++)
    {
        cout << arr[j] <<endl;
    }
    //释放数组要加一个中括号delete[] arr;
}

int main()
{
    //使用delete来手动释放内存
    int *p = func();
    cout << *p <<endl;
    tets1();
    test2();
    return 0;
}