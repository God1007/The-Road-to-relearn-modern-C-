#include<iostream>
#include<string>
//��Ԫ
//�ڳ������Щ˽������Ҳ�������������һЩ������������з��ʣ���Ҫ�õ���Ԫ
//��Ԫ��Ŀ�ľ�����һ�����������������һ������˽�г�Ա

//�ؼ��� friend

/*
��Ԫ������ʵ�֣�
1��ȫ�ֺ�������Ԫ
2��������Ԫ
3����Ա��������Ԫ
*/

//��������
class Building{
    friend void goodGuy(Building *building);//�����Ԫ
public:
    std::string m_SittingRoom;

    Building(){
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }

private:
    std::string m_BedRoom;

};

void goodGuy(Building *building){
    std::cout << "�û���ȫ�ֺ������ڷ���" << building->m_SittingRoom <<std::endl;
    std::cout << "�û���ȫ�ֺ������ڷ���" << building->m_BedRoom <<std::endl;
}

void test01(){
    Building building;
    goodGuy(&building);
}

int main(){
    test01();
    return 0;
}