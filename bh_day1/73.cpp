#include<iostream>

//空指针访问成员函数
//c++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针

//如果用到this指针，需要加以判断保证代码的健壮性

class Person{
    public:
    void showclassname(){
        std::cout << "This is Person class" << std::endl;
    }
    void showpersonage(){

        if(this == NULL){
            return;
        }

        std::cout << this->m_age << std::endl;
    }

    int m_age;
};

void test01(){
    Person *p = NULL;
    p -> showclassname(); //这个不会崩
    p -> showpersonage(); //没有判断的话，这个会崩

}



int main(){
    test01();
}