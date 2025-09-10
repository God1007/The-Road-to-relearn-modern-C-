#include<iostream>
#include<string>

using namespace std;

int main()
{
    //指针所占空间，不管数据类型都是8字节（64位），4字节（32位）
    int *p;
    cout << sizeof(p) << endl;
    char *k;
    cout << sizeof(k) << endl;
    return 0;
}