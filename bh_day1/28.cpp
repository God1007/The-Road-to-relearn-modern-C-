#include<iostream>
using namespace std;

int main()
{
    //��ת��䣺��������ѡ��ṹ����ѭ���ṹ
    //��������switch����ǰѭ����䡢������ڲ�ѭ�����
    for( int i = 0 ; i < 5; i++)
    {
        for(int j = 0;j < 5; j++)
        {
            cout << " * ";
            if(j == 1)
                break;
        }
        cout << endl;
    }
}