#include<iostream>
#include<string>

//��װ������2������ͬȨ�޼��Կ���
/*
1��public     ���� ��Ա�������ⶼ���Է���
2��protected  ���� ��Ա���ڿ��Է��ʣ����ⲻ���Է��� ������ı���Ȩ�����ݣ���������Ҳ����ʹ�ã�
3��private    ˽�� ��Ա���ڿ��Է��ʣ����ⲻ���Է��� ���ڼ̳��϶���������
*/

class person{
public:
    std::string name;

    void func(){
        name = "Jared";
        car = "bycicle";
        password = "123456789";
    }
protected:
    std::string car;
private:
    std::string password;
};


int main()
{
    person p1;
    p1.name = "Xiaoxiao";
    // p1.car = "xxx";
    p1.func();
    std::cout << p1.name << std::endl;
    return 0;
}