#include<iostream>
#include<string>

class person{
friend std::ostream & operator<<(std::ostream &cout, person& p);
friend void test01();

private:
    int a;
    int b;

    //1、成员函数方法
    //因为调用对象，所以一般不用成员函数来重载 <<
    // person operator << (???){
    // }
};

//左移运算符重载

// 全局函数重载
// std::ostream& operator << (std::ostream &cout, person &p){
//     cout << p.a << " " << p.b << std::endl;
//     return cout;
// }

std::ostream & operator<<(std::ostream &cout, person& p)
{
    cout << p.a <<  " " << p.b << std::endl;
    return cout;
}


void test01(){
    person p;
    p.a = 10;
    p.b = 20;
    std::cout << p.a << " " << p.b << std::endl;
    std::cout << p << std::endl;
}

int main(){
    test01();
    return 0;
}