#include<iostream>

//赋值运算符重载
//C++编译器默认提供一个函数（之前学过三个了，默认构造、默认析构和默认拷贝）：赋值运算符operator =对属性进行值拷贝

class person{
public:
    person(int age){
        m_age = new int(age);
    }

    ~person(){
        delete m_age;
        m_age = NULL;
    }

    
    int *m_age;

    //重载运算符
    person& operator=(person &p){
        //编译器默认提供的是浅拷贝
        //m_age = p.m_age;
        //应该先判断是否有属性在堆区，然后再释放，再深拷贝
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        //深拷贝
        m_age = new int(*p.m_age);
        return *this;
    }
};




void test01(){
    person p1(18);
    person p2(20);
    
    std::cout << "Before assignment:" << std::endl;
    std::cout << "p1: " << *p1.m_age << " at " << p1.m_age << std::endl;
    std::cout << "p2: " << *p2.m_age << " at " << p2.m_age << std::endl;
    
    p2 = p1; // 危险操作！
    
    std::cout << "After assignment:" << std::endl;
    std::cout << "p1: " << *p1.m_age << " at " << p1.m_age << std::endl;
    std::cout << "p2: " << *p2.m_age << " at " << p2.m_age << std::endl;

}



int main(){
    // test01();
    int a = 10;
    int b = 20;
    int c = 30;
    a = b = c;
    person p1(18);
    person p2(20);
    person p3(22);
    p1 = p2 = p3;
    std::cout << *p1.m_age << " " << *p2.m_age << " " << *p3.m_age << std::endl;
    return 0;
}