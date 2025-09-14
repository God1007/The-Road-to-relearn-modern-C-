#include<iostream>
#include<string>
//c++对象模型和this指针
// 成员变量 和 成员函数 分开储存

class Person{
    //只有非静态成员变量才属于类的对象
    int m_A;//非静态
    static int m_B;
    

    void func(){//非静态成员函数，不会和成员变量一起存储，不属于类对象上，可以看sizeof()

    }

    static void func2(){//静态成员函数，不属于类对象上

    }
};

int Person::m_B = 10;

void test01(){
    Person p;
    Person p2;
    std::cout << &p <<std::endl;//空对象占用1个字节
    //C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
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