#include<iostream>

//thisָ��

//ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���Ͷ���Ṳ��һ�����
//���⣺���������һ�����������ʵ����

//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

//thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
//thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

//thisָ�����;��
/*
1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
2������ķǾ�̬��Ա�����з��ض���������return *this
*/

class Person{
public:
    Person(int age){
        this->age = age; //thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
    }
    //ֵ���ػ᷵��һ�������Ķ������÷��ؾͲ��ᴴ���¶���
    Person& PersonAddAge(Person &p){
        this->age += p.age;
        return *this;
    }

    int age;
};

//1��������Ƴ�ͻ
void test01(){
    Person p1(18);
    std::cout <<p1.age<<std::endl;
}


//2�����ض�������*this
void test02(){
    Person p1(10);
    Person p2(20);
    p1.PersonAddAge(p2).PersonAddAge(p2);
    // p1.PersonAddAge(p2);//������ʹ��p1.PersonAddAge(p2).PersonAddAge(p2)������return *this  ��ʽ���˼��
    // p1.PersonAddAge(p2);
    std::cout << p1.age << std::endl;
}   

int main(){
    // test01();
    test02();
    return 0;
}