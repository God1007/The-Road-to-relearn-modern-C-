#include<iostream>
#include<string>

using namespace std;

//��������:��Ҫ���������βΣ���ֹ�����
//�ں����β��б��У�������const�����βΣ���ֹ�βθı�ʵ��

void showvalue(const int &a){
    cout << a << endl;
    // a = 1000;
}

int main()
{
    //int a = 10;
    //int &ref = a; //����дint &ref = 10
    //const int &ref2 = 10;//����const֮�󣬱������������޸�Ϊint temp = 10; int &ref2 = temp
    //�� ���������Լ��Ż�����
    //��ʱ��ref2֮���Ϊֻ���������޸�
    int a =100;
    showvalue(a);
    cout << a <<endl;
    return 0;
}