#include<iostream>

//��ֵ���������
//C++������Ĭ���ṩһ��������֮ǰѧ�������ˣ�Ĭ�Ϲ��졢Ĭ��������Ĭ�Ͽ���������ֵ�����operator =�����Խ���ֵ����

class person{
public:
    person(int age){
        m_age = new int(age);
    }

    ~person(){
        delete m_age;
        m_age = NULL;
    }

    
    int *m_age;

    //���������
    person& operator=(person &p){
        //������Ĭ���ṩ����ǳ����
        //m_age = p.m_age;
        //Ӧ�����ж��Ƿ��������ڶ�����Ȼ�����ͷţ������
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        //���
        m_age = new int(*p.m_age);
        return *this;
    }
};




void test01(){
    person p1(18);
    person p2(20);
    
    std::cout << "Before assignment:" << std::endl;
    std::cout << "p1: " << *p1.m_age << " at " << p1.m_age << std::endl;
    std::cout << "p2: " << *p2.m_age << " at " << p2.m_age << std::endl;
    
    p2 = p1; // Σ�ղ�����
    
    std::cout << "After assignment:" << std::endl;
    std::cout << "p1: " << *p1.m_age << " at " << p1.m_age << std::endl;
    std::cout << "p2: " << *p2.m_age << " at " << p2.m_age << std::endl;

}



int main(){
    // test01();
    int a = 10;
    int b = 20;
    int c = 30;
    a = b = c;
    person p1(18);
    person p2(20);
    person p3(22);
    p1 = p2 = p3;
    std::cout << *p1.m_age << " " << *p2.m_age << " " << *p3.m_age << std::endl;
    return 0;
}