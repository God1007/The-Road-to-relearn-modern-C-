#include<iostream>

// 子类继承父类后，当创建子对象，也会调用父类的构造函数
// 父类和子类的构造和析构顺序：先构造父类，再构造子类，析构反之


class Base{
    public:
        Base(){
            std::cout << "Base构造" <<std::endl;
        }
        ~Base(){
            std::cout << "Base析构" <<std::endl;
        }
};

class Son:public Base{
public:
    Son(){
        std::cout << "Son构造" <<std::endl;
    }
    ~Son(){
         std::cout << "Son析构" <<std::endl;
    }
};

void test01(){
    //Base b;
    Son s;
}

int main(){
    test01();
    return 0;
}