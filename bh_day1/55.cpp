#include<iostream>

using namespace std;

//目前阶段的占位参数还用不到，后面会用到
//展位参数还可以有默认参数
void func(int = 10 ,int = 10)
{
    cout << " This is a function." << endl;
}

//函数占位参数
//调用函数时必须填补该位置
int main()
{
    func();
    return 0;
}