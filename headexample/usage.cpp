#include "swap.h"
#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    
    cout << "交换前 - main函数中: a = " << a << ", b = " << b << endl;
    
    swap(a, b);  // 值传递，不会改变实际参数
    
    cout << "交换后 - main函数中: a = " << a << ", b = " << b << endl;
    cout << "说明：值传递不会改变原始变量的值！" << endl;
    
    return 0;
}