#include<iostream>

//多态
/*
多态分为两类：
静态多态：函数重载和运算符重载属于静态多态，复用函数名
（讲的多态大多是）动态多态：派生类和虚函数实现运行时多态
*/
/*
静态多态的函数地址早绑定~编译阶段确定函数地址
动态多态的函数地址晚绑定~运行阶段确定函数地址
*/

class Animal{
    public:
    virtual void speak(){
        std::cout << "speak" << std::endl;
    }
};

class cat:public Animal{
    public:
    void speak(){ //我们加入了虚函数
        std::cout << "cat speak" <<std::endl;
    }
};

class dog:public Animal{
public:
    void speak(){
        std::cout << "dog speak" <<std::endl;
    }
};

//执行说话的函数
void dospeak(Animal &animal){ //需要的是Animal，给的是cat Animal &animal = cat 在C++中父类是可以直接指向子类的
    animal.speak(); //所以到底是调用了哪一个speak呢
    //其实是调用了Animal，因为这里的地址早绑定在Animal上了，在编译阶段就确定函数地址了
}

void test(){
    cat cat;
    dospeak(cat); //但是我们的本意是想让猫说话，所以需要让函数地址晚绑定（动态多态）
    dog dog;
    dospeak(dog);
}
//动态多态满足条件：
//1、必须有继承关系
//2、子类要重写父类的虚函数 (区分重载和重写)
void test02(){
    std::cout << sizeof(Animal) <<std::endl; //加了虚函数之后，大小从1变成了8，原因是添加了一个vfptr指针（虚函数（表）指针）
    //这个vftpr会指向一个虚函数表（vftable），表内记录虚函数地址（&Animal::speak）
    //子类也会继承这个vfptr，也是指向子类自己的vftable（&Animal::speak），如果发生重写，子类会把自己的vftable做一个覆写操作变成&cat::speak
    //当父类的指针或引用指向子类对象的时候，就会发生多态
}
//动态多态的使用
// 父类的指针或者引用 指向子类对象



int main(){
    test02();
    return 0;
}