#include<iostream>

//��̬��Ա
/*
��̬��Ա���������ж�����ͬһ�����ݡ��ڱ���׶η����ڴ桢���������������ʼ��(�����г�ʼֵ)
��̬��Ա���������ж�����ͬһ����������̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/


class Person{
public:
    static int m_a;
    //���ж�����ͬһ������
    //����׶ξͻ�����ڴ��
    //���ھ�������������г�ʼ��
    //��̬��Ա����Ҳ���з���Ȩ�޵�
private:
    static int m_b;
};

int Person::m_a = 100;
int Person::m_b = 200;

void test01(){
    Person p;
    std::cout << p.m_a << std::endl;
    Person p2;
    p2.m_a = 20;
    std::cout << p.m_a << std::endl;
    std::cout << p2.m_a << std::endl;//���ݹ���
}

void test02(){
    //��̬��Ա����������ĳ�������ϣ���Ϊ���ж�����һ������
    //��˾�̬��Ա���������ַ��ʷ�ʽ
    //1��ͨ��������з���
    Person p;
    std::cout << p.m_a << std::endl;
    //2��ͨ���������з���
    std::cout << Person::m_a << std::endl;
    // std::cout << Person::m_b << std::endl;  ���ɷ��ʣ���Ϊ˽��Ȩ��
}

int main(){
    test02();
    return 0;
}