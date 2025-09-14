#include<iostream>

//深拷贝:在堆区重新申请空间,进行拷贝操作
//浅拷贝:简单的赋值拷贝操作

class Person{
public:
    int m_Age;
    int *m_Height;

public:
    Person(){
        std::cout << "Person默认构造函数调用" << std::endl;
    } //如果有有参构造,没有无参构造,那就会报错,因为他不会自动生成无参构造

    Person(int age, int hight){
        std::cout << "Person有参构造函数调用" << std::endl;
        m_Age = age;
        m_Height = new int(hight);
    }

    Person(const Person &p){
        std::cout << "Person拷贝构造函数调用" << std::endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);//就是重新开辟一块区域，避免double free的问题
        // 深拷贝的关键就是内存块也要拷贝一份
    }
    
    ~Person(){
    std::cout << "析构函数调用，准备释放地址: " << m_Height << std::endl;
    if(m_Height!=NULL){
        delete m_Height;
        m_Height = NULL;
        std::cout << "内存已释放" << std::endl;
    }
    }
};

void test01(){
    Person p1(18, 160);
    std::cout << p1.m_Age << " " << *p1.m_Height << std::endl;

    Person p2(p1); //默认拷贝函数是浅拷贝，会有双重释放（double free）的问题
    std::cout << p2.m_Age << " " << *p2.m_Height << std::endl;
    //浅拷贝的问题要用深拷贝去进行解决
}

int main(){
    test01();
}