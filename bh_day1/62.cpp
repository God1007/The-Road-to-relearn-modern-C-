#include<iostream>
#include<string>

//��Ա��������Ϊ˽��

//�ŵ�һ�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�������������Ч��

class Person{
private:
    std::string name; //�ɶ���д
    int age = 18; // ֻ��
    std::string idol; //ֻд

public:
    void writename(std::string n)
    {
        name = n;
    }

    void showname(){
        std::cout << name << std::endl;
    }

    void showage(){
        std::cout << age << std::endl;
    }

    void setage(int ageee){
        if(ageee >= 0 && ageee <= 150){
            age = ageee;
        }
        else{
            std::cout << "Wrong!" << std::endl;
        }
    }

    void writeidol(std::string i){
        idol = i;
    }

};

int main()
{
    Person p;
    p.writename("Jared");
    p.showname();
    p.showage();
    p.setage(160);
    p.setage(50);
    p.showage();
    p.writeidol("ikun");
    return 0;
}