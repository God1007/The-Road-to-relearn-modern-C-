#include<iostream>

const double pi = 3.14;

class Circle{
    //����Ȩ��
public:
    int r;

    double calculatezc(){
        return 2*pi*r;
    }

};


int main()
{
    //��Ͷ���
    //C++��OOP�����������̳С���װ����̬
    //C++��Ϊ���������Ϊ���������ԣ�����Ϊ
    //��װ�����壺�����Ժ���Ϊ��Ϊһ�����壬���Զ��߼���Ȩ�޿���
    //������ͬ���ʵĶ������ǳ�Ϊ��
    Circle c1;
    c1.r = 10;
    std::cout << c1.calculatezc() << std::endl;
    return 0;
}