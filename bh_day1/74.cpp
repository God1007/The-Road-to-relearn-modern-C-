#include<iostream>

//const修饰成员函数

/*
常函数：
1、成员函数后加const后我们称这个函数为常含数
2、常函数内不可以修改成员属性
3、成员属性声明加关键字mutable后，在常函数中依然可以修改

常对象：
1、声明对象前加const称该对象为常对象
2、常对象只能调用常函数
*/

class Person{
public:
    //this指针的本质是指针常量，指针指向的地址是不可以修改的！
    // Person * const this ↑
    void showPerson() {
        //m_A = 100;//其实这行代码的本质是this->m_A
        m_B = 100;
        //this = NULL; //this指针不可以修改指针的指向！
    }

    /*
    //在成员函数后面加const，本质是修饰this指向，让指针指向的值也不可以改变
    // const Person * const this ↑
    void showPerson() const {
        //m_A = 100;//其实这行代码的本质是this->m_A
        m_B = 100;
        //this = NULL; //this指针不可以修改指针的指向！
    }
    */

    void showPerson2() const{ //常函数不能调用普通函数
        std::cout << m_C << std::endl;
        m_C = 100; //加一个mutable就可以在常函数中进行修改了
    }

    const int m_A = 100;//加const就不可以修改了
    int m_B = 200;
    mutable int m_C = 300; //特殊变量，在常函数中也可以修改这个值
};



void test01(){
    Person p;
    p.showPerson();
}

void test02(){
    const Person p;//变为常对象,只能调用常函数
    p.m_C = 600;
    p.showPerson2();
}

int main(){
    test02();
    return 0;
}