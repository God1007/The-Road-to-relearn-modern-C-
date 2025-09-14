#include<iostream>

//初始化列表
//构造函数（）：属性1（值1），属性2（值2）... {}

class Person{
public:
    int m_A;
    int m_B;
    int m_C;

    // Person(int a, int b,int c){
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    //初始化列表初始化属性
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){
    }

};

void test01(){
    // Person p(10,20,30);
    Person p(10,20,30);
    std::cout << p.m_A << std::endl;
    std::cout << p.m_B << std::endl;
    std::cout << p.m_C << std::endl;
}

int main(){
    test01();
    return 0;
}