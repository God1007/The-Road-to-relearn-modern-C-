#include<iostream>
#include<string>
//��Ա��������Ԫ

class buildings;

class goodguy{
public:
    goodguy();
    //����������ܹ�����building�е�˽�г�Ա
    void visit();
    //��������ɷ���˽�г�Ա
    void visit2();
    buildings *building;
};

class buildings{
    friend void goodguy::visit();
public:
    buildings();//����ʵ��
    std::string settingroom;
private:
    std::string bedroom;
};

buildings::buildings(){
    settingroom = "����";
    bedroom = "����";
}

goodguy::goodguy(){
    building = new buildings;
}

void goodguy::visit(){
    std::cout << "visit�������ڷ���" << building -> settingroom << std::endl;
    std::cout << "visit�������ڷ���" << building -> bedroom << std::endl;
}

void goodguy::visit2(){
    std::cout << "visit2�������ڷ���" << building -> settingroom << std::endl; 
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