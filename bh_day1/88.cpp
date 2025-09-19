#include<iostream>

//�̳�ͬ����̬��Ա����ʽ
//��̬��Ա�ͷǾ�̬��Ա����ͬ����������һ�£�ֱ�ӷ���/������

class Base{
    public:
    static int m_a;
    static void func(){
        std::cout << "Base-static" << std::endl;
    }
};

int Base::m_a = 100;

class son:public Base{
    public:
    static int m_a;
    static void func(){
        std::cout << "Son-static" << std::endl;
    }
};

int son::m_a = 200;

void test01(){
    son s;
    //ͨ���������
    std::cout << s.m_a << std::endl;
    std::cout << s.Base::m_a << std::endl;
    //ͨ����������
    std::cout << son::m_a << std::endl;
    //��һ��::��ͨ���������ʣ��ڶ���::�Ƿ��ʸ�����������
    std::cout << son::Base::m_a << std::endl; 
}

void test02(){
    son s;
    s.func();
    s.Base::func();
    son::func();
    son::Base::func();
}
//����ͬ����̬����������Ҳ�Ὣ�����ͬ������Ҳ�����ص�����Ҫ��������ʹ�ø����ͬ����̬����
int main(){
    // test01();
    test02();
    return 0;
}