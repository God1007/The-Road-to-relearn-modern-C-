#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main()
{
    //指针与数组,利用指针访问数组中的元素
    vector<int> num = {1, 2, 3, 4, 5};
    int* p = num.data(); // 正确的方式，获取vector内部数组的指针

    // 使用指针访问元素
    cout << *p << endl;        // 输出第一个元素: 1
    cout << *(p + 2) << endl;  // 输出第三个元素: 3vector<int> num = {1, 2, 3, 4, 5};

    int *p2 = num.data();
    for(size_t i = 0;i < num.size(); i++)
    {
        cout << *p2 << endl;
        p2++;
    }
    

}