#include<iostream>
#include<string>

using namespace std;

int main()
{
    //��Ŀ��������ص��Ǳ���������������ֵ������ȡ���ֵ��ʾ
    int a = 5, b = 10, c = 6;
    int max = (a > c) ? ((a > b) ? a : b) : ((b > c) ? b : c);
    cout << "�������ǣ�" << max << endl;
    (a > b ? a : b) = 20;
    c = (a > b ? a : b);
    return 0;
}