#include<iostream>
#include<string>


//继承中的对象模型
//从父类继承过来的成员，哪些属于子类对象中

class Base{
public:
    int a;
private:
    int b;
protected:
    int c;
};

class son:public Base{
    public:
        int d;
};

void test01(){
    son s1;
    std::cout << sizeof(s1) << std::endl;
    //private也是会被继承下来的，只是无法访问
    //父类中的所有非静态成员属性都会被子类继承
    //父类中的私有成员属性是被编译器给隐藏了，因此无法访问，但是确实是被挤成了
}
int main(){
    test01();
    return 0;
}

// cl /d1 reportSingleClassLayout 类名 可以在visual Studio的开发人员命令提示工具里看类布局