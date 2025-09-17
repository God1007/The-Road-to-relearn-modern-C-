#include<iostream>

//继承同名成员处理方式
//访问子类同名成员，直接访问即可
//访问父类同名成员，需要加作用域

class Base{
public:
    Base(){
        a = 100;
    }
    void func(){
        std::cout << "Base的func" <<std::endl;
    }

    void func(int a){
        std::cout << "Base的func(int a)" <<std::endl;
    }
    int a;
};

class son:public Base{
public:
    int a;
    son(){
        a = 200;
    }

    void func(){
        std::cout << "son的func" << std::endl;
    }
};
//同名成员变量
void test01(){
    son s;
    std::cout << s.a << std::endl;  //直接访问即可
    std::cout << s.Base::a << std::endl;  //加一个作用域
}

//同名成员函数
void test02(){
    son s;
    s.func();  //也是直接调用
    s.Base::func(); //也是加作用域
    //现在将base中的函数重载
    s.Base::func(100);
}

int main(){
    // test01();
    test02();
    return 0;
}