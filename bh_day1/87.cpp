#include<iostream>

//�̳�ͬ����Ա����ʽ
//��������ͬ����Ա��ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա����Ҫ��������

class Base{
public:
    Base(){
        a = 100;
    }
    void func(){
        std::cout << "Base��func" <<std::endl;
    }

    void func(int a){
        std::cout << "Base��func(int a)" <<std::endl;
    }
    int a;
};

class son:public Base{
public:
    int a;
    son(){
        a = 200;
    }

    void func(){
        std::cout << "son��func" << std::endl;
    }
};
//ͬ����Ա����
void test01(){
    son s;
    std::cout << s.a << std::endl;  //ֱ�ӷ��ʼ���
    std::cout << s.Base::a << std::endl;  //��һ��������
}

//ͬ����Ա����
void test02(){
    son s;
    s.func();  //Ҳ��ֱ�ӵ���
    s.Base::func(); //Ҳ�Ǽ�������
    //���ڽ�base�еĺ�������
    s.Base::func(100);
}

int main(){
    // test01();
    test02();
    return 0;
}