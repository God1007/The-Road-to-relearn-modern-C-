#include<iostream>
using namespace std;

int main()
{
    //do while 与 while 的区别：do while 至少执行一次，而 while 可能一次都不执行
    int i = 0;
    do
    {
        cout << ++i <<endl;
    } while(i < 10);
    return 0;
}