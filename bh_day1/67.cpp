#include<iostream>

//���:�ڶ�����������ռ�,���п�������
//ǳ����:�򵥵ĸ�ֵ��������

class Person{
public:
    int m_Age;
    int *m_Height;

public:
    Person(){
        std::cout << "PersonĬ�Ϲ��캯������" << std::endl;
    } //������вι���,û���޲ι���,�Ǿͻᱨ��,��Ϊ�������Զ������޲ι���

    Person(int age, int hight){
        std::cout << "Person�вι��캯������" << std::endl;
        m_Age = age;
        m_Height = new int(hight);
    }

    Person(const Person &p){
        std::cout << "Person�������캯������" << std::endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);//�������¿���һ�����򣬱���double free������
        // ����Ĺؼ������ڴ��ҲҪ����һ��
    }
    
    ~Person(){
    std::cout << "�����������ã�׼���ͷŵ�ַ: " << m_Height << std::endl;
    if(m_Height!=NULL){
        delete m_Height;
        m_Height = NULL;
        std::cout << "�ڴ����ͷ�" << std::endl;
    }
    }
};

void test01(){
    Person p1(18, 160);
    std::cout << p1.m_Age << " " << *p1.m_Height << std::endl;

    Person p2(p1); //Ĭ�Ͽ���������ǳ����������˫���ͷţ�double free��������
    std::cout << p2.m_Age << " " << *p2.m_Height << std::endl;
    //ǳ����������Ҫ�����ȥ���н��
}

int main(){
    test01();
}