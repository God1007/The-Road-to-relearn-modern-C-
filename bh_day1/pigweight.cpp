#include<iostream>
#include<string>
#include<cmath>
using namespace std;


//��������: ����ֻС������أ���ֱ�������ֻС������أ������ж���ֻС������
int main()
{
    int A,B,C;
    cout << "��������ֻС������أ���������С��A�����أ�kg����";
    cin >> A;
    cout << "�������С��B�����أ� ";
    cin >> B;
    cout << "�������С��C�����أ�";
    cin >> C;
    if(max(max(A,B),C) == A)
    {
        cout << "С��A�����صģ�����Ȼ��" << A << "kg" << endl;
    }
    else if(max(max(A,B),C) == B)
    {
        cout << "С��B�����صģ�����Ȼ��" << B << "kg" << endl;
    }
    else
    {
        cout << "С��C�����صģ�����Ȼ��" << C << "kg" << endl;
    }
    system("pause");
    return 0;
}