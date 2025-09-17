#include<iostream>
#include<string>

//继承
/*
定义一些类的时候，下级别的成员拥有上一级成员的共性和自己的特性，此时可以使用继承来减少重复代码

*/
// class Java{
//     public:
//     void header(){
//         std::cout << "HEADER" << std::endl;
//     }
//     void footer(){
//         std::cout << "FOOTER" << std::endl;
//     }
//     void left(){
//         std::cout << "LEFT" << std::endl;
//     }
//     void content(){
//         std::cout << "CONTENT" << std::endl;
//     }
// };

//继承
class BasePage{//公共页面
public:
    void header(){
        std::cout << "HEADER" << std::endl;
    }
    void footer(){
        std::cout << "FOOTER" << std::endl;
    }
    void left(){
        std::cout << "LEFT" << std::endl;
    }
    void content(){
        std::cout << "CONTENT" << std::endl;
    }
};


//语法： class 子类 ：继承方式 父类
//子类：也称为派生类    
//父类：也称为基类

class Java : public BasePage{ //继承  子类/父类
public:
    void javacontent(){
        std::cout << "JAVA" << std::endl;
    }
};

class Cpp : public BasePage{
public:
    void cppcontent(){
        std::cout << "cpp" << std::endl;
    }
};

void test01(){
    // Java ja;
    // ja.header();
    // ja.left();
    // ja.footer();
    // ja.content();
    Java ja;
    ja.content();
    ja.footer();
    ja.javacontent();
}

int main()
{
    test01();
    return 0;
}