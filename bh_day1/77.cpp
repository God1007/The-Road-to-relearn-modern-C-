#include<iostream>
#include<string>
//成员函数做友元

class buildings;

class goodguy{
public:
    goodguy();
    //让这个函数能够访问building中的私有成员
    void visit();
    //让这个不可访问私有成员
    void visit2();
    buildings *building;
};

class buildings{
    friend void goodguy::visit();
public:
    buildings();//类外实现
    std::string settingroom;
private:
    std::string bedroom;
};

buildings::buildings(){
    settingroom = "客厅";
    bedroom = "卧室";
}

goodguy::goodguy(){
    building = new buildings;
}

void goodguy::visit(){
    std::cout << "visit函数正在访问" << building -> settingroom << std::endl;
    std::cout << "visit函数正在访问" << building -> bedroom << std::endl;
}

void goodguy::visit2(){
    std::cout << "visit2函数正在访问" << building -> settingroom << std::endl; 
}



void test01(){
    goodguy gg;
    gg.visit();
    gg.visit2();
}

int main(){
    test01();
    return 0;
}