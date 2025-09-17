#include<iostream>

//const���γ�Ա����

/*
��������
1����Ա�������const�����ǳ��������Ϊ������
2���������ڲ������޸ĳ�Ա����
3����Ա���������ӹؼ���mutable���ڳ���������Ȼ�����޸�

������
1����������ǰ��const�Ƹö���Ϊ������
2��������ֻ�ܵ��ó�����
*/

class Person{
public:
    //thisָ��ı�����ָ�볣����ָ��ָ��ĵ�ַ�ǲ������޸ĵģ�
    // Person * const this ��
    void showPerson() {
        //m_A = 100;//��ʵ���д���ı�����this->m_A
        m_B = 100;
        //this = NULL; //thisָ�벻�����޸�ָ���ָ��
    }

    /*
    //�ڳ�Ա���������const������������thisָ����ָ��ָ���ֵҲ�����Ըı�
    // const Person * const this ��
    void showPerson() const {
        //m_A = 100;//��ʵ���д���ı�����this->m_A
        m_B = 100;
        //this = NULL; //thisָ�벻�����޸�ָ���ָ��
    }
    */

    void showPerson2() const{ //���������ܵ�����ͨ����
        std::cout << m_C << std::endl;
        m_C = 100; //��һ��mutable�Ϳ����ڳ������н����޸���
    }

    const int m_A = 100;//��const�Ͳ������޸���
    int m_B = 200;
    mutable int m_C = 300; //����������ڳ�������Ҳ�����޸����ֵ
};



void test01(){
    Person p;
    p.showPerson();
}

void test02(){
    const Person p;//��Ϊ������,ֻ�ܵ��ó�����
    p.m_C = 600;
    p.showPerson2();
}

int main(){
    test02();
    return 0;
}