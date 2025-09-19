#include<iostream>
#include<string>

/*
����������������Ʒ�Ĵ������̣���ˮ - ���� - ���뱭�� - ���븨��
���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ*/

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
        std::cout << "��ˮ" << std::endl;
    }
    void pao(){
        std::cout << "���ݿ���" << std::endl;
    }
    void cup(){
        std::cout << "���뱭��" <<std::endl;
    }
    void add(){
        std::cout << "����" << std::endl;
    }
};

class tea:public base{
public:
    void boilwater(){
        std::cout << "��ˮ" << std::endl;
    }
    void pao(){
        std::cout << "���ݲ�Ҷ" << std::endl;
    }
    void cup(){
        std::cout << "���뱭��" <<std::endl;
    }
    void add(){
        std::cout << "������" << std::endl;
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
