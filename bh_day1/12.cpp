#include<iostream>
#include<string>
using namespace std;

int main()
{
    //�ַ�����
    //C�����ַ��� char str[] = "Hello"
    string str = "hello world";
    cout << "str�Ĵ�С��" << str.size() << endl;
    cout << str.at(0) << endl;

    string str2 = "H\nello";
    cout << "str2�Ĵ�С��" << str2.size() << endl;
    cout << str2 << endl;
    system("pause");
    return 0;
}