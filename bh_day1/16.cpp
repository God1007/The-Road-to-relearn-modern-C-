#include<iostream>
#include<string>
using namespace std;

int main()
{
    //ǰ�õ����ͺ��õ���
    //ǰ�õ������ȼ�1��ʹ�ñ��ʽ
    //���õ�������ʹ�ñ��ʽ�ټ�1
    int a = 5;
    cout << "ǰ�õ��������" << ++a << endl; //�ȼ�1�����
    cout << "���õ��������" << a++ << endl; //������ټ�1
    cout << "��ǰֵ��" << a << endl;
    int b1 = 10;
    int b2 = 10;
    cout << "ǰ�õ��������" << ++b1 * a << endl; //�ȼ�1�����
    cout << "���õ��������" << b2++ * a << endl; //������ټ�1
    cout << "��ǰֵ��" << b1 << endl;
    cout << "��ǰֵ��" << b2 << endl;
}