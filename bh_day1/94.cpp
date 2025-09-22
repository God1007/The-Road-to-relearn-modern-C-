#include<iostream>
#include<string>
//虚析构和纯虚析构

//多态使用时，如果子类中有属性开辟到堆区，父类指针再释放时无法调用子类的析构代码
//解决方法：将父类中的析构函数改成虚析构或者纯虚析构

//虚析构和春虚析构的共性：
//1、都可以解决父类指针释放子类对象
//2、都需要有具体的函数实现

//二者区别：
//如果是纯虚析构，该类属于抽象类，无法实例化对象

//虚析构语法：
// virtual ~类名(){}
// 纯虚析构语法：
// virtual ~类名() = 0

class animal{
    public:
    animal(){
        std::cout << "animal构造函数" << std::endl;
    }

    // virtual ~animal(){ //利用虚析构可以解决父类指针释放子类对象时不干净的问题
    //     std::cout << "animal析构函数" << std::endl;
    // }
    //纯虚析构,万一有数据开辟到堆区呢，所以析构函数是一定要有定义的，不能只是单纯的声明
    //有了纯虚析构之后，这个类也属于抽象类，1无法实例化对象
    virtual ~animal() = 0;

    virtual void speak() = 0;
}; 

animal::~animal(){
    std::cout << "animal纯虚析构函数" << std::endl;
 }



class cat:public animal{
public:
    cat(std::string name){
        std::cout << "cat构造函数" <<std::endl;
        this->name = new std::string(name);
    }

    void speak(){
        std::cout << *name << "cat spreak" << std::endl;
    }

    ~cat(){ //这里父类在析构的时候无法调用子类的析构函数，造成内存泄漏
        std::cout << "cat 析构函数" << std::endl;
        if(name != NULL){
           delete name; 
        }

    }

    std::string *name; //创建在堆区并用指针维护他
};

void test01(){
    animal *a = new cat("Tom");
    a->speak();
    delete a;    
}

int main(){
    test01();
    return 0;
}