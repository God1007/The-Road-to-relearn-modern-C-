#include<iostream>
#include<string>
//c++����ģ�ͺ�thisָ��
// ��Ա���� �� ��Ա���� �ֿ�����

class Person{
    //ֻ�зǾ�̬��Ա������������Ķ���
    int m_A;//�Ǿ�̬
    static int m_B;
    

    void func(){//�Ǿ�̬��Ա����������ͳ�Ա����һ��洢��������������ϣ����Կ�sizeof()

    }

    static void func2(){//��̬��Ա�������������������

    }
};

int Person::m_B = 10;

void test01(){
    Person p;
    Person p2;
    std::cout << &p <<std::endl;//�ն���ռ��1���ֽ�
    //C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
    std::cout << &p2 << std::endl;
}

void test02(){
    Person p;
    std::cout << sizeof(p) << std::endl;
}

int main(){
    test02();
    return 0;
}