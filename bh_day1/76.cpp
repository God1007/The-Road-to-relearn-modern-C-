#include<iostream>
#include<string>

//������Ԫ
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

Buildings::Buildings(){ //����ʵ��
    m_BedRoom = "����";
    m_SittingRoom = "����";
}

//�û�����

class Goodguy{
public:
    Goodguy();
public:
    void visit(); //�ιۺ�������building�е�����
    Buildings *building;
};


void Goodguy::visit(){
    std::cout << "�û��������ڷ���" << building->m_SittingRoom << std::endl;
    std::cout << "�û��������ڷ���" << building->m_BedRoom << std::endl;
}

Goodguy::Goodguy(){
    //����һ�����������
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