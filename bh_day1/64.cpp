#include<iostream>

//构造函数的分类和调用
//按参数可以分为：有参构造，无参构造(默认构造)
//按类型分为：普通构造，拷贝构造

//三种调用方式：括号法、显示法、隐式转换法

class Person{
public:    
    //1、构造函数
    Person(){
        std::cout << "Person构造函数的调用" << std::endl;
    }

    Person(int a){
        age = a;
        std::cout << "Person构造函数的调用" << std::endl;
    }

    //拷贝构造函数,const + 引用
    //将p的所有属性拷贝一份
    Person( const Person &p ){
        std::cout << "Person构造函数的调用" << std::endl;
        age = p.age;
    }

    int age;

    //2、析构函数
    ~Person(){
        std::cout << "Person析构函数的调用" << std::endl;
    }
};

//调用
void test01(){
    // //1、括号法
    // Person p; //默认构造函数调用
    // Person p2(10);//有参构造函数
    // // //拷贝构造函数
    // Person p3(p2);

    // // //调用默认构造函数时候，不要加()
    // std::cout << p2.age << std::endl;
    // std::cout << p3.age << std::endl;
    //Person p1(); 编译器会认为是一个函数的声明
    //2、显示法
    Person p1;
    Person p2 = Person(10); //有参构造
    Person p3 = Person(p2); //拷贝构造

    // Person(10);//匿名对象，他是没有名字的，当前行执行结束后系统会立即回收匿名对象
    std::cout << "aaaaaaaaaaaaa" << std::endl;
    //不要利用拷贝构造函数来初始化匿名对象,编译器会认为Person(p3) == Person p3，会认为是一个对象的声明
    //Person(p3);
    //3、隐式转换法
    Person p4 = 10; //相当于写了Person p4 = Person(10);
    Person p5 = p4; //拷贝构造
}

int main(){
    test01();
    return 0;
}