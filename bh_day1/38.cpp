#include<iostream>
using namespace std;

void swap01(int a,int b)
{
    int temp =a;
    a=b;
    b=temp;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}


int main()
{
    //ָ���뺯��
    //ֵ����
    int a =10;
    int b =20;
    swap01(a,b);
    cout << a << " "<< b <<endl;
    //��ַ����
    swap(&a,&b);
    cout << a << " " << b << endl;
    return 0;
}