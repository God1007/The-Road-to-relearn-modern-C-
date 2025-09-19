#include<iostream>
#include<string>

/*
案例描述：制作饮品的大致流程：煮水 - 冲泡 - 倒入杯中 - 加入辅料
利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶*/

class base{
public:
    virtual void boilwater() = 0;
    virtual void pao() = 0;
    virtual void cup() = 0;
    virtual void add() = 0;
};

class coffee:public base{
public:
    void boilwater(){
        std::cout << "煮水" << std::endl;
    }
    void pao(){
        std::cout << "冲泡咖啡" << std::endl;
    }
    void cup(){
        std::cout << "倒入杯中" <<std::endl;
    }
    void add(){
        std::cout << "加糖" << std::endl;
    }
};

class tea:public base{
public:
    void boilwater(){
        std::cout << "煮水" << std::endl;
    }
    void pao(){
        std::cout << "冲泡茶叶" << std::endl;
    }
    void cup(){
        std::cout << "倒入杯中" <<std::endl;
    }
    void add(){
        std::cout << "加柠檬" << std::endl;
    }
};

void dowork(base *a){
    a->boilwater();
    a->pao();
    a->cup();
    a->add();
    delete a;
}

int main(){
    dowork(new tea);
    dowork(new coffee);
    return 0;
}
