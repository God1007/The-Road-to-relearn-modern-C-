#include<iostream>
using namespace std;

int main()
{
    //�������ͣ�������������
    /*
    Ĭ������£�С������ʾ����λ��Ч����
    ����int 4B
    �ַ���char 1B
    ������float 4B
    ˫����double 8B
    */
   float f = 3.14f;//�Ӹ�f��������Ϊf����Ĭ����double
   double d = 3.14;
   cout << "float�������ڴ�ռ�ã�" << sizeof(f) << endl;
   cout << "double�������ڴ�ռ�ã�" << sizeof(d) << endl;
   cout << "f=" << f << endl;
   cout << "d=" << d << endl;

   //��ѧ������
   float f2 = 3.1113e-2f; //3.1113*10��-2�η�
   cout << "f2=" << f2 << endl;


   system("pause");
   return 0;
}