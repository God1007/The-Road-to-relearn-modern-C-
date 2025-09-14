#include<iostream>
#include<string>

//类做友元
class Goodguy;

class Buildings{
    friend class Goodguy;
public:
    Buildings();
public:
    std::string m_SittingRoom;
private:
    std::string m_BedRoom;
};

Buildings::Buildings(){ //类外实现
    m_BedRoom = "卧室";
    m_SittingRoom = "客厅";
}

//好基友类

class Goodguy{
public:
    Goodguy();
public:
    void visit(); //参观函数访问building中的属性
    Buildings *building;
};


void Goodguy::visit(){
    std::cout << "好基友类正在访问" << building->m_SittingRoom << std::endl;
    std::cout << "好基友类正在访问" << building->m_BedRoom << std::endl;
}

Goodguy::Goodguy(){
    //创建一个建筑物对象
    building = new Buildings;
}

void test01(){
    Goodguy gg;
    gg.visit();
}

int main(){
    test01();
    return 0;
}