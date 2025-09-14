#include<iostream>
#include<string>

//类对象作为类成员
//C++中的成员可以是另一个类的对象，我们称其为对象成员
/*
class A()
class B{
    A a;
}
构造顺序和析构顺序要分清,先构造类内的对象!!!
*/

class Phone{
    public:
    std::string p_name;
    Phone(std::string name){
        std::cout << "Phone构造函数调用" <<std::endl;
        p_name = name;
    }
    ~Phone(){
        std::cout << "Phone析构函数的调用" <<std::endl;
    }
};

class Person{
    public:
    ~Person(){
        std::cout << "Person析构函数的调用" <<std::endl;
    }
    //相当于用隐式转换法，进行Phone m_number = pName;

    Person(std::string name,std::string pName):m_name(name),m_number(pName){
        std::cout << "Person构造函数调用" << std::endl;
    }
    std::string m_name;
    Phone m_number;

};

void test01(){
    Person p("张三","iphone14pro");
    std::cout << p.m_name << " " << p.m_number.p_name << std::endl;
}

int main(){
    test01();
    return 0;
}