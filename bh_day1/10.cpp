#include <iostream>
#include<string>
using namespace std;

int main()
{
    //字符型
    /*
    C和C++中字符型变量只占用1个字节
    它是将对应的ASCII码存储在存储单元当中
    char ch = 'A'; char只能有一个字符，不能是字符串
    */

    char ch = 'H';//必须是单引号
    cout << "ch的大小：" << sizeof(ch) << endl;
    cout << ch << endl;
    cout << (int)'a' << endl;
    cout << (int)'A' << endl;
    string cc = "amjdsbfjkd";
    cout << "cc的大小：" << sizeof(cc) << endl;
    cout << cc.at(0) << endl;
    char a = 65;
    cout << a << endl;
    system("pause");
    return 0;
}