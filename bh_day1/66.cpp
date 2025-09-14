#include<iostream>

//构造函数调用规则
/*
默认情况下，C++编译器至少给一个类添加三个函数
1、默认构造函数
2、默认析构函数
3、默认拷贝函数（对属性进行值拷贝）
*/

/*
如果用户定义有参构造，则不再提供默认无参构造，但是会提供默认拷贝构造
如果定义拷贝构造函数，C++就不会再提供其他构造函数
*/

class Person{
public:
    int m_Age;

public:
    Person(){
        std::cout << "Person默认构造函数调用" << std::endl;
    } //如果有有参构造,没有无参构造,那就会报错,因为他不会自动生成无参构造

    // Person(int age){
    //     std::cout << "Person有参构造函数调用" << std::endl;
    //     m_Age = age;
    // }

    Person(const Person &p){
        std::cout << "Person拷贝构造函数调用" << std::endl;
        m_Age = p.m_Age;
    }
    
    ~Person(){
        std::cout << "Person析构函数调用" << std::endl;
    }
};

void test01(){
    Person p;
    p.m_Age = 18; //即使没有定义拷贝函数，他也会自动生成默认拷贝函数
    //顺序上就是 拷贝构造 > 有参构造 > 无参构造
    std::cout << p.m_Age << std::endl;
}

int main(){
    test01();
}