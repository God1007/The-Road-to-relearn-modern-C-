#include<iostream>

//���캯���ķ���͵���
//���������Է�Ϊ���вι��죬�޲ι���(Ĭ�Ϲ���)
//�����ͷ�Ϊ����ͨ���죬��������

//���ֵ��÷�ʽ�����ŷ�����ʾ������ʽת����

class Person{
public:    
    //1�����캯��
    Person(){
        std::cout << "Person���캯���ĵ���" << std::endl;
    }

    Person(int a){
        age = a;
        std::cout << "Person���캯���ĵ���" << std::endl;
    }

    //�������캯��,const + ����
    //��p���������Կ���һ��
    Person( const Person &p ){
        std::cout << "Person���캯���ĵ���" << std::endl;
        age = p.age;
    }

    int age;

    //2����������
    ~Person(){
        std::cout << "Person���������ĵ���" << std::endl;
    }
};

//����
void test01(){
    // //1�����ŷ�
    // Person p; //Ĭ�Ϲ��캯������
    // Person p2(10);//�вι��캯��
    // // //�������캯��
    // Person p3(p2);

    // // //����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ��()
    // std::cout << p2.age << std::endl;
    // std::cout << p3.age << std::endl;
    //Person p1(); ����������Ϊ��һ������������
    //2����ʾ��
    Person p1;
    Person p2 = Person(10); //�вι���
    Person p3 = Person(p2); //��������

    // Person(10);//������������û�����ֵģ���ǰ��ִ�н�����ϵͳ������������������
    std::cout << "aaaaaaaaaaaaa" << std::endl;
    //��Ҫ���ÿ������캯������ʼ����������,����������ΪPerson(p3) == Person p3������Ϊ��һ�����������
    //Person(p3);
    //3����ʽת����
    Person p4 = 10; //�൱��д��Person p4 = Person(10);
    Person p5 = p4; //��������
}

int main(){
    test01();
    return 0;
}