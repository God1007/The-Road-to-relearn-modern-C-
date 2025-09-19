#include<iostream>
#include<string>
//纯虚函数和抽象类
//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数

//纯虚函数语法 virtual 返回值类型 函数名 （参数列表） = 0；
//当类中有了纯虚函数，这个类也被称为抽象类

/*
抽象类特点：
1、无法实例化对象
2、子类必须重写抽象类中的纯虚函数，否则也属于抽象类（无法实例化对象）
*/
class base{
public:
    virtual void func()=0; //纯虚函数
    //因为有纯虚函数，它就变成了抽象类
    //纯虚函数的意义就是强制子类去重写纯虚函数
};

class son:public base{
public:
    //如果不重写纯虚函数，他也会变成抽象类
    void func() override {
        std::cout << "son::func" << std::endl;
    }
};

class son2:public base{
public:
    void func() override {
        std::cout << "son2::func" << std::endl;
    }
};

void test01(){
    //base b;  抽象类无法实例化对象，会报错
    //new base; ↑
    base *a = new son;
    a -> func();
}

void test02(){
    base *b = new son2;
    b->func();
}

int main(){
    test01();
    test02();
    return 0;
}