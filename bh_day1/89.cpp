#include<iostream>

//多继承语法
/*
C++允许一个类继承多个类
语法:class 子类：继承方式 父类1，继承方式 父类2
*/

//多继承可能会引发父类中有同名成员出现，需要作用域来访问

class Base1{
public:
    Base1():a(100){
    }
    int a;
};

class Base2{
    public:
    Base2():a(200){   
    }
    int a;
};

class son:public Base1,public Base2{
    public:
    int c,d;
    son():c(300),d(400){
    }
};

void test01(){
    son s;
    std::cout << sizeof(s) << std::endl;
    std::cout << s.Base1::a << std::endl;
    std::cout << s.Base2::a << std::endl;
}

int main(){
    test01();
    return 0;
}