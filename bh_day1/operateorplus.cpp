#include<iostream>
#include<string>

//��������أ������е���������ж��壬������һ�ֹ�������Ӧ��ͬ��������

//�������õ��������ͣ�������֪����ν�������
//֮ǰ����ͨ��д��Ա������ʵ�����������������֮�󷵻��µĶ���
/*  ͨ����Ա��������
Person PAP(Person &p){
    Person temp;
    temp.m_A = this->m_A + p.m_A;
    return temp;
}
*/

// ����������һ��ͨ�õ�����  operator+ ���滻PAP
// �ڵ��õ�ʱ��ͻ���p1.operator+(p2)
// �ᱻ�򻯳�p1 + p2


/*
ͨ��ȫ�ֺ�������+
Person operate+(Person &p1, Person &p2)
    Person temp;
    temp.m_A = p1.m_A + p2.m_B;
    return temp;
*/


//�Ӻ����������
//���������Ҳ���Է�����������


class person{
public:
    int m_A;
    int m_B;
// 1����Ա��������+
    person operator+ (person &t){
        person temp;
        temp.m_A = this->m_A + t.m_A;
        temp.m_B = this->m_B + t.m_B;
        return temp;
    }
};

//2��ȫ�ֺ�������+

person operator+(person &p1,person &p2){
    person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

person operator+(person &p1,int k){
    person temp;
    temp.m_A = p1.m_A + k;
    temp.m_B = p1.m_B + k;
    return temp;
}

void test01(){
    person p1;
    p1.m_A = 10;
    p1.m_B = 30;
    person p2;
    p2.m_A = 20;
    p2.m_B = 40;

    person p3 = p1.operator+(p2);
    p2 = p2 + 10;
    std::cout << p3.m_A << " " << p3.m_B << std::endl;
    std::cout << p2.m_A << " " << p2.m_B << std::endl;  

}

int main(){
    test01();
    return 0;
}
