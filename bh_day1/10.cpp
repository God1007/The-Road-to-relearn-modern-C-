#include <iostream>
#include<string>
using namespace std;

int main()
{
    //�ַ���
    /*
    C��C++���ַ��ͱ���ֻռ��1���ֽ�
    ���ǽ���Ӧ��ASCII��洢�ڴ洢��Ԫ����
    char ch = 'A'; charֻ����һ���ַ����������ַ���
    */

    char ch = 'H';//�����ǵ�����
    cout << "ch�Ĵ�С��" << sizeof(ch) << endl;
    cout << ch << endl;
    cout << (int)'a' << endl;
    cout << (int)'A' << endl;
    string cc = "amjdsbfjkd";
    cout << "cc�Ĵ�С��" << sizeof(cc) << endl;
    cout << cc.at(0) << endl;
    char a = 65;
    cout << a << endl;
    system("pause");
    return 0;
}