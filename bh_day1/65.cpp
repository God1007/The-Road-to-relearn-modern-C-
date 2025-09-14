#include<iostream>

//拷贝构造函数调用时机
/*
三种情况：
1、使用一个已经创建完毕的对象来初始化一个新对象
2、以值传递的方式给函数参数传值
3、以值方式返回局部对象
*/
class Person{
    public:
    int m_Age;

    public:
    Person(){
        std::cout << "Person默认构造函数调用" << std::endl;
    }

    Person(int age){
        std::cout << "Person有参构造函数调用" << std::endl;
        m_Age = age;
    }

    Person(const Person &p){
        std::cout << "Person拷贝构造函数调用" << std::endl;
        m_Age = p.m_Age;
    }
    
    ~Person(){
        std::cout << "Person析构函数调用" << std::endl;
    }

};


void test01(){
//1、使用一个已经创建完毕的对象来初始化一个新对象
    Person p1(20);
    Person p2(p1);
    std::cout << p2.m_Age << std::endl;
}

//2、以值传递的方式给函数参数传值
void doWork(Person p){
    p.m_Age = 1000; // 不会影响函数体外的变量
}

void test02(){
    Person p;
    doWork(p); //这里就会调用拷贝构造函数
}
//3、以值方式返回局部对象

Person doWork2(){
    Person p1;
    std::cout << (int*)&p1 << std::endl;
    return p1;
}

void test3(){
    Person p = doWork2();
    std::cout << (int*)&p << std::endl;
}

int main(){
    // test01();
    // test02();
    test3(); //有RVO优化了，直接分配内存去创建对象了，省去两次拷贝构造函数
}