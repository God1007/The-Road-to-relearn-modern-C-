#include<iostream>
#include<string>
//友元
//在程序里，有些私有属性也想让类外特殊的一些函数或者类进行访问，需要用到友元
//友元的目的就是让一个函数或者类访问另一个类中私有成员

//关键词 friend

/*
友元的三种实现：
1、全局函数做友元
2、类做友元
3、成员函数做友元
*/

//建筑物类
class Building{
    friend void goodGuy(Building *building);//添加友元
public:
    std::string m_SittingRoom;

    Building(){
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

private:
    std::string m_BedRoom;

};

void goodGuy(Building *building){
    std::cout << "好基友全局函数正在访问" << building->m_SittingRoom <<std::endl;
    std::cout << "好基友全局函数正在访问" << building->m_BedRoom <<std::endl;
}

void test01(){
    Building building;
    goodGuy(&building);
}

int main(){
    test01();
    return 0;
}