#include<iostream>

//this指针

//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型对象会共用一块代码
//问题：如何区分哪一块对象调用这个实例？

//this指针指向被调用的成员函数所属的对象

//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可

//this指针的用途：
/*
1、当形参和成员变量同名时，可用this指针来区分
2、在类的非静态成员函数中返回对象本身，可用return *this
*/

class Person{
public:
    Person(int age){
        this->age = age; //this指针指向被调用的成员函数所属的对象
    }
    //值返回会返回一个拷贝的对象，引用返回就不会创建新对象
    Person& PersonAddAge(Person &p){
        this->age += p.age;
        return *this;
    }

    int age;
};

//1、解决名称冲突
void test01(){
    Person p1(18);
    std::cout <<p1.age<<std::endl;
}


//2、返回对象本身用*this
void test02(){
    Person p1(10);
    Person p2(20);
    p1.PersonAddAge(p2).PersonAddAge(p2);
    // p1.PersonAddAge(p2);//不可以使用p1.PersonAddAge(p2).PersonAddAge(p2)，除非return *this  链式编程思想
    // p1.PersonAddAge(p2);
    std::cout << p1.age << std::endl;
}   

int main(){
    // test01();
    test02();
    return 0;
}