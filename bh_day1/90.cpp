#include<iostream>

//菱形继承（钻石继承）

/*
两个派生类继承同一个基类
又有某个类同时继承两个派生类
*/
/*
    o
   / \
  o   o
   \ /
    o
*/
/*
菱形继承问题：
当最底层的子类调用上层派生类的数据的时候，可能产生二义性（用作用域解决）
但还有一个问题，一个数据继承了两份，到底该选择哪一份？*/

class Animal{
public:
    int age;

    Animal():age(10){   
    }
    Animal(int val):age(val){
    }
};
//虚继承，此时Animal就是虚基类
//
class sheep:virtual public Animal{
public:
    sheep(int val = 15):Animal(val){   
    }
};

class tuo:virtual public Animal{
public:
    tuo(int val = 18):Animal(val){
    }
};

class sheeptuo:public sheep,public tuo{
public:

};
//子类在继承的时候会有一个vbptr（虚基类指针），指向一个叫vbtable（虚基类表），虚基类表中记录偏移量
// virtual base pointer

void test01(){
    sheeptuo st;
    //st.sheep::age = 18; //加作用域来解决歧义
    //st.tuo::age = 28;
    std::cout << st.sheep::age << std::endl;
    std::cout << st.tuo::age << std::endl;
    std::cout << st.age << std::endl;

    //但是这个age我其实只需要一份，现在有两份不就是资源浪费吗
    //利用虚继承可以解决该问题
}

int main(){
    test01();
    return 0;
}