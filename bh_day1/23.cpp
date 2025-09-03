#include<iostream>
#include<string>
using namespace std;

int main()
{
    //switch语句
    //switch缺点：只能判断整型，char类型，枚举类型，不能判断浮点型
    //switch优点：可以使用case语句，代码可读性高，执行效率高
    //switch能判断表达式吗？：可以
    int a;
    cout << "input a plz: ";
    cin >> a;
    switch(a)
    {
        case 4:
            cout << "a is 4" << endl;
            break; //退出当前分支，不然会一直往下走
        case 3:
            cout << "a is 3" << endl;
            break;
        case 2:
            cout << "a is 2" << endl;
            break;
        default:
            cout << "a is not 1, 2 or 3" << endl;
            break;
    }

    switch(a > 4)
    {
        case 1:
            cout << "a is greater than 4" << endl;
            break;
        case 0:
            cout << "a is not greater than 4" << endl;
            break;
    }
    return 0;
}