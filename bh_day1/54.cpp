#include<iostream>
#include<string>

using namespace std;

//�������
//��C++�У��������β��б��е��β��ǿ�����Ĭ��ֵ��
//�﷨������ֵ���� ������ ������=Ĭ��ֵ��{}

int func(int a, int b=20 ,int c = 30)
{
    return a + b + c;
}

//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����ң�������Ҫ��Ĭ��
//2�����������������Ĭ�ϲ������Ǻ�����ʵ�־Ͳ�����Ĭ�ϲ����ˣ�����ֻ����һ����Ĭ�ϲ�������Ȼ���ж�����

int func2(int a,int b);//����
int func2(int a,int b){//ʵ��
    return a+b;
}

int main(){
    cout << func(10);
    return 0;
}