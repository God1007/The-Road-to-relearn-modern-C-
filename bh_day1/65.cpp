#include<iostream>

//�������캯������ʱ��
/*
���������
1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
2����ֵ���ݵķ�ʽ������������ֵ
3����ֵ��ʽ���ؾֲ�����
*/
class Person{
    public:
    int m_Age;

    public:
    Person(){
        std::cout << "PersonĬ�Ϲ��캯������" << std::endl;
    }

    Person(int age){
        std::cout << "Person�вι��캯������" << std::endl;
        m_Age = age;
    }

    Person(const Person &p){
        std::cout << "Person�������캯������" << std::endl;
        m_Age = p.m_Age;
    }
    
    ~Person(){
        std::cout << "Person������������" << std::endl;
    }

};


void test01(){
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
    Person p1(20);
    Person p2(p1);
    std::cout << p2.m_Age << std::endl;
}

//2����ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p){
    p.m_Age = 1000; // ����Ӱ�캯������ı���
}

void test02(){
    Person p;
    doWork(p); //����ͻ���ÿ������캯��
}
//3����ֵ��ʽ���ؾֲ�����

Person doWork2(){
    Person p1;
    std::cout << (int*)&p1 << std::endl;
    return p1;
}

void test3(){
    Person p = doWork2();
    std::cout << (int*)&p << std::endl;
}

int main(){
    // test01();
    // test02();
    test3(); //��RVO�Ż��ˣ�ֱ�ӷ����ڴ�ȥ���������ˣ�ʡȥ���ο������캯��
}