#include<iostream>
#include<string>
using namespace std;

int main()
{
    //�߼������
    // &&  ||  !
    // ��·��
    int a = 10;
    int b = 20;
    cout << (a > 5 && b > 15) << endl; // true
    cout << (a > 5 && b < 15) << endl; // false
    // ��·��
    cout << (a < 5 || b > 15) << endl; // true
    cout << (a < 5 || b < 15) << endl; // false
    return 0;
}