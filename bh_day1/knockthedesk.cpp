#include<iostream>
#include<string>

using namespace std;

int main()
{
   //��1��ʼ������100��������ָ�λ����ʮλ����7��������7�ı�������ӡ�����ӣ���������ֱ�Ӵ�ӡ���
   for(int i = 1; i<=100; i++)
   {
        if(i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
            cout << "Knock the desk." << endl;
        else
            cout << i << endl;
   } 
   system("pause");
   return 0;
}