#include<iostream>
#include<string>
using namespace std;

int main()
{
    //字符串型
    //C风格的字符串 char str[] = "Hello"
    string str = "hello world";
    cout << "str的大小：" << str.size() << endl;
    cout << str.at(0) << endl;

    string str2 = "H\nello";
    cout << "str2的大小：" << str2.size() << endl;
    cout << str2 << endl;
    system("pause");
    return 0;
}