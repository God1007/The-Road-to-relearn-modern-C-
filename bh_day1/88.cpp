#include<iostream>

//继承同名静态成员处理方式
//静态成员和非静态成员出现同名，处理方法一致（直接访问/作用域）

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
    //通过对象访问
    std::cout << s.m_a << std::endl;
    std::cout << s.Base::m_a << std::endl;
    //通过类名访问
    std::cout << son::m_a << std::endl;
    //第一个::是通过类名访问，第二个::是访问父类作用域下
    std::cout << son::Base::m_a << std::endl; 
}

void test02(){
    son s;
    s.func();
    s.Base::func();
    son::func();
    son::Base::func();
}
//出现同名静态函数，子类也会将父类的同名函数也会隐藏掉，需要作用域来使用父类的同名静态函数
int main(){
    // test01();
    test02();
    return 0;
}