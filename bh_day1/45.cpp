#include<iostream>
#include<cstdint>
using namespace std;

//ȫ�ֱ���
int t1 = 10;
int t2 = 10;
const int t3 = 10;
const int t4 = 10;


int main()
{
    //ȫ����
    //������ͨ�ֲ���������
    int a = 10;
    int b = 10;

    //��̬��������ȫ�ֱ�������ȫ������
    static int c = 10;
    static int d = 10;

    //����
    //�ַ�������(ȫ����)
    cout << reinterpret_cast<size_t>("Hello World") << endl;
    //const���εı���
    //const���ε�ȫ�ֱ���(ȫ����)
    cout << (uintptr_t)(&t3) << " " << (uintptr_t)(&t4) << endl;
    //const���εľֲ�����(�ֲ������;ֲ�������һ���ڴ���)
    const int e = 10;
    const int f = 10;
    cout << (uintptr_t)(&e) << " " << (uintptr_t)(&f) <<endl;

    cout << (uintptr_t)(&a) << " " << (uintptr_t)(&b) <<endl;
    cout << (uintptr_t)(&t1) << " " << (uintptr_t)(&t2) << endl;
    cout << (uintptr_t)(&c) << " " << (uintptr_t)(&d) <<endl;
    return 0;
}