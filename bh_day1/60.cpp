#include<iostream>
#include<string>

//封装的意义2：给不同权限加以控制
/*
1、public     公共 成员类内类外都可以访问
2、protected  保护 成员类内可以访问，类外不可以访问 （父类的保护权限数据，在子类中也可以使用）
3、private    私有 成员类内可以访问，类外不可以访问 （在继承上二者有区别）
*/

class person{
public:
    std::string name;

    void func(){
        name = "Jared";
        car = "bycicle";
        password = "123456789";
    }
protected:
    std::string car;
private:
    std::string password;
};


int main()
{
    person p1;
    p1.name = "Xiaoxiao";
    // p1.car = "xxx";
    p1.func();
    std::cout << p1.name << std::endl;
    return 0;
}