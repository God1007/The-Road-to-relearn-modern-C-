#include<iostream>

//���캯�����ù���
/*
Ĭ������£�C++���������ٸ�һ���������������
1��Ĭ�Ϲ��캯��
2��Ĭ����������
3��Ĭ�Ͽ��������������Խ���ֵ������
*/

/*
����û������вι��죬�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
������忽�����캯����C++�Ͳ������ṩ�������캯��
*/

class Person{
public:
    int m_Age;

public:
    Person(){
        std::cout << "PersonĬ�Ϲ��캯������" << std::endl;
    } //������вι���,û���޲ι���,�Ǿͻᱨ��,��Ϊ�������Զ������޲ι���

    // Person(int age){
    //     std::cout << "Person�вι��캯������" << std::endl;
    //     m_Age = age;
    // }

    Person(const Person &p){
        std::cout << "Person�������캯������" << std::endl;
        m_Age = p.m_Age;
    }
    
    ~Person(){
        std::cout << "Person������������" << std::endl;
    }
};

void test01(){
    Person p;
    p.m_Age = 18; //��ʹû�ж��忽����������Ҳ���Զ�����Ĭ�Ͽ�������
    //˳���Ͼ��� �������� > �вι��� > �޲ι���
    std::cout << p.m_Age << std::endl;
}

int main(){
    test01();
}