#include<iostream>

//静态成员
/*
静态成员变量：所有对象共享同一份数据、在编译阶段分配内存、类内声明，类外初始化(必须有初始值)
静态成员函数：所有对象共享同一个函数，静态成员函数只能访问静态成员变量
*/


class Person{
public:
    static int m_a;
    //所有对象共享同一份数据
    //编译阶段就会分配内存的
    //类内就声明，类外进行初始化
    //静态成员变量也是有访问权限的
private:
    static int m_b;
};

int Person::m_a = 100;
int Person::m_b = 200;

void test01(){
    Person p;
    std::cout << p.m_a << std::endl;
    Person p2;
    p2.m_a = 20;
    std::cout << p.m_a << std::endl;
    std::cout << p2.m_a << std::endl;//数据共享
}

void test02(){
    //静态成员变量不属于某个对象上，因为所有对象共享一份数据
    //因此静态成员变量有两种访问方式
    //1、通过对象进行访问
    Person p;
    std::cout << p.m_a << std::endl;
    //2、通过类名进行访问
    std::cout << Person::m_a << std::endl;
    // std::cout << Person::m_b << std::endl;  不可访问，因为私有权限
}

int main(){
    test02();
    return 0;
}