#include<iostream>
#include<string>
// 函数调用运算符重载
// 函数调用运算符（）也可以重载
// 由于重载后使用的方式非强项函数的调用，因此称为仿函数
// 他没有固定写法，非常灵活
class Myprint{
public:
    //重载函数调用运算符
    void operator()(std::string test){
        std::cout << test << std::endl;
    }
};

class MyAdd{
public:
    int num;
    void operator()(const int &a){
        this->num += a;
    }

    int operator()(int &a,int &b){
        std::cout << a + b << std::endl;
        return a + b;
    }

};

void MyPrint02(std::string text){
    std::cout << text << std::endl;
}

void test01(){
    Myprint myprint;
    myprint("HelloWorld!");
    //因为用起来非常类似函数调用，而且很灵活
    MyPrint02("HelloWorld!");
}

void test02(){
    // MyAdd a;
    // a.num = 10;
    // a(10);
    // std::cout << a.num << std::endl;
    MyAdd add;
    int a = 10;
    int b = 10;
    int result = add(a,b);
    MyAdd()(a,b); //匿名函数对象，其中MyAdd代替了add（），用完就释放了
}

int main(){
    test02();
    return 0;
}