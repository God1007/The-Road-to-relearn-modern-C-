#include<iostream>
using namespace std;

int main()
{
    //goto语句：可以无条件跳转语句，如果标记存在，执行到goto语句就会直接飞过去
    //但是尽量不使用goto语句，因为会导致代码的可读性变低，结构变得很混乱
    cout << "1" << endl;
    goto FLAG;
    cout << "2" <<endl;
    cout << "3" << endl;
    FLAG: // 加的是冒号
    {
        cout << "4" << endl;
        cout << "5" << endl;
    }
    return 0;
}