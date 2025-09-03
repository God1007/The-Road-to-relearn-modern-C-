#include<iostream>
#include<array>
#include<cmath>
#include<iterator>

using namespace std;

int main()
{
    //数组有三种定义方法，这三中经典C风格定义的数组都是内置数组
    //数组是放在连续的内存空间中
    //数组中的每个元素都是相同数据类型
    //数组下标从0开始
    int a[10];
    int b[3] = {1,2,3}; // 没写满默认用0填充
    int c[] = {1,2,3,4,5};

    //更加现代的C++写法
    array<int,5> d = {1,2,3,4,5};


    //下标赋值
    a[0] = 100;
    b[0] = 100;
    cout << a[0] << endl;
    cout << sizeof(b)/sizeof(b[0]) << endl; // 内置数组也可以使用sizeof()来获取数组长度，但是因为是内存大小，所以需要除一下
    cout << size(c) << endl; // 内置数组可以利用iterator头文件里的size()来获取数组长度
    cout << d.size() << endl; // d.size() 只能用于 std::array、std::vector 等STL容器
    cout << b << endl; //输出数组的首地址
    cout << (void*)a << endl;
    cout << d.data() << endl;
    return 0;
}