#include<iostream>
using namespace std;

int main()
{
    //转义字符
    cout << "aaaaa\tWorld" << endl; //制表用，保证输出整齐
    cout << "aa\tWorld" << endl;
    cout << "aaa\tWorld" << endl;
    cout << "Hello\nWorld" << endl; //换行
    cout << "Hello\\World" << endl; //反斜杠
    cout << "Hello\rWorld" << endl; //回车


    return 0;
}