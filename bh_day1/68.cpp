#include<iostream>

//��ʼ���б�
//���캯������������1��ֵ1��������2��ֵ2��... {}

class Person{
public:
    int m_A;
    int m_B;
    int m_C;

    // Person(int a, int b,int c){
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    //��ʼ���б��ʼ������
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){
    }

};

void test01(){
    // Person p(10,20,30);
    Person p(10,20,30);
    std::cout << p.m_A << std::endl;
    std::cout << p.m_B << std::endl;
    std::cout << p.m_C << std::endl;
}

int main(){
    test01();
    return 0;
}