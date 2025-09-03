#include<iostream>
#include<string>
using namespace std;

int main()
{
    //C++的三种程序运行结构：
    // 顺序结构：按顺序执行，不发生跳转
    // 选择结构：根据条件选择执行不同的代码块
    // 循环结构：重复执行某段代码，直到满足某个条件
    /*
    if语句：if(条件){条件满足执行的语句}
    if(a>0){a++;}
    if条件语句后面不要加分号，不然是不会执行这个if的子语句的
    */
    int a;
    cout << "input a:" << endl;
    cin >> a;
    if(a > 0)
    {
        cout << "congratulations!" << endl;
    }
    else if (a == 0)
    {
        cout << "sorry!" << endl;
    }
    else
    {
        cout << "error!" << endl;
    }
    system("pause");
    return 0;
}