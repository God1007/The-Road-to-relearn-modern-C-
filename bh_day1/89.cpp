#include<iostream>

//��̳��﷨
/*
C++����һ����̳ж����
�﷨:class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2
*/

//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������

class Base1{
public:
    Base1():a(100){
    }
    int a;
};

class Base2{
    public:
    Base2():a(200){   
    }
    int a;
};

class son:public Base1,public Base2{
    public:
    int c,d;
    son():c(300),d(400){
    }
};

void test01(){
    son s;
    std::cout << sizeof(s) << std::endl;
    std::cout << s.Base1::a << std::endl;
    std::cout << s.Base2::a << std::endl;
}

int main(){
    test01();
    return 0;
}