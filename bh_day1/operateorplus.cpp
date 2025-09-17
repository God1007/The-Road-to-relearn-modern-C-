#include<iostream>
#include<string>

//运算符重载：对已有的运算符进行定义，赋予另一种功能以适应不同数据类型

//对于内置的数据类型，编译器知道如何进行运算
//之前都是通过写成员函数来实现两个对象相加属性之后返回新的对象
/*  通过成员函数重载
Person PAP(Person &p){
    Person temp;
    temp.m_A = this->m_A + p.m_A;
    return temp;
}
*/

// 编译器起了一个通用的名字  operator+ 来替换PAP
// 在调用的时候就会变成p1.operator+(p2)
// 会被简化成p1 + p2


/*
通过全局函数重载+
Person operate+(Person &p1, Person &p2)
    Person temp;
    temp.m_A = p1.m_A + p2.m_B;
    return temp;
*/


//加号运算符加载
//运算符重载也可以发生函数重载


class person{
public:
    int m_A;
    int m_B;
// 1、成员函数重载+
    person operator+ (person &t){
        person temp;
        temp.m_A = this->m_A + t.m_A;
        temp.m_B = this->m_B + t.m_B;
        return temp;
    }
};

//2、全局函数重载+

person operator+(person &p1,person &p2){
    person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

person operator+(person &p1,int k){
    person temp;
    temp.m_A = p1.m_A + k;
    temp.m_B = p1.m_B + k;
    return temp;
}

void test01(){
    person p1;
    p1.m_A = 10;
    p1.m_B = 30;
    person p2;
    p2.m_A = 20;
    p2.m_B = 40;

    person p3 = p1.operator+(p2);
    p2 = p2 + 10;
    std::cout << p3.m_A << " " << p3.m_B << std::endl;
    std::cout << p2.m_A << " " << p2.m_B << std::endl;  

}

int main(){
    test01();
    return 0;
}
