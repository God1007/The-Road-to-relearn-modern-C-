#include<iostream>
#include<string>

//�������Ϊ���Ա
//C++�еĳ�Ա��������һ����Ķ������ǳ���Ϊ�����Ա
/*
class A()
class B{
    A a;
}
����˳�������˳��Ҫ����,�ȹ������ڵĶ���!!!
*/

class Phone{
    public:
    std::string p_name;
    Phone(std::string name){
        std::cout << "Phone���캯������" <<std::endl;
        p_name = name;
    }
    ~Phone(){
        std::cout << "Phone���������ĵ���" <<std::endl;
    }
};

class Person{
    public:
    ~Person(){
        std::cout << "Person���������ĵ���" <<std::endl;
    }
    //�൱������ʽת����������Phone m_number = pName;

    Person(std::string name,std::string pName):m_name(name),m_number(pName){
        std::cout << "Person���캯������" << std::endl;
    }
    std::string m_name;
    Phone m_number;

};

void test01(){
    Person p("����","iphone14pro");
    std::cout << p.m_name << " " << p.m_number.p_name << std::endl;
}

int main(){
    test01();
    return 0;
}