#include<iostream>
#include<string>

//成员属性设置为私有

//优点一：将所有成员属性设置为私有，可以自己控制读写权限
//优点二：检测数据有效性

class Person{
private:
    std::string name; //可读可写
    int age = 18; // 只读
    std::string idol; //只写

public:
    void writename(std::string n)
    {
        name = n;
    }

    void showname(){
        std::cout << name << std::endl;
    }

    void showage(){
        std::cout << age << std::endl;
    }

    void setage(int ageee){
        if(ageee >= 0 && ageee <= 150){
            age = ageee;
        }
        else{
            std::cout << "Wrong!" << std::endl;
        }
    }

    void writeidol(std::string i){
        idol = i;
    }

};

int main()
{
    Person p;
    p.writename("Jared");
    p.showname();
    p.showage();
    p.setage(160);
    p.setage(50);
    p.showage();
    p.writeidol("ikun");
    return 0;
}