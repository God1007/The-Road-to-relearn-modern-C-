#include<iostream>

const double pi = 3.14;

class Circle{
    //公共权限
public:
    int r;

    double calculatezc(){
        return 2*pi*r;
    }

};


int main()
{
    //类和对象
    //C++的OOP三大特征：继承、封装、多态
    //C++认为万事万物皆为对象，有属性，有行为
    //封装的意义：将属性和行为作为一个整体，并对二者加以权限控制
    //具有相同性质的对象，我们称为类
    Circle c1;
    c1.r = 10;
    std::cout << c1.calculatezc() << std::endl;
    return 0;
}