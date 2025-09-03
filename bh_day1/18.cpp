#include<iostream>
#include<string>
using namespace std;

int main()
{
    //逻辑运算符
    // &&  ||  !
    // 短路与
    int a = 10;
    int b = 20;
    cout << (a > 5 && b > 15) << endl; // true
    cout << (a > 5 && b < 15) << endl; // false
    // 短路或
    cout << (a < 5 || b > 15) << endl; // true
    cout << (a < 5 || b < 15) << endl; // false
    return 0;
}