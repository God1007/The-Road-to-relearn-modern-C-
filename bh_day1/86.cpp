#include<iostream>

// ����̳и���󣬵������Ӷ���Ҳ����ø���Ĺ��캯��
// ���������Ĺ��������˳���ȹ��츸�࣬�ٹ������࣬������֮


class Base{
    public:
        Base(){
            std::cout << "Base����" <<std::endl;
        }
        ~Base(){
            std::cout << "Base����" <<std::endl;
        }
};

class Son:public Base{
public:
    Son(){
        std::cout << "Son����" <<std::endl;
    }
    ~Son(){
         std::cout << "Son����" <<std::endl;
    }
};

void test01(){
    //Base b;
    Son s;
}

int main(){
    test01();
    return 0;
}