#include<iostream>
#include<string>
//���麯���ͳ�����
//�ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������
//��˿��Խ��麯����Ϊ���麯��

//���麯���﷨ virtual ����ֵ���� ������ �������б� = 0��
//���������˴��麯���������Ҳ����Ϊ������

/*
�������ص㣺
1���޷�ʵ��������
2�����������д�������еĴ��麯��������Ҳ���ڳ����ࣨ�޷�ʵ��������
*/
class base{
public:
    virtual void func()=0; //���麯��
    //��Ϊ�д��麯�������ͱ���˳�����
    //���麯�����������ǿ������ȥ��д���麯��
};

class son:public base{
public:
    //�������д���麯������Ҳ���ɳ�����
    void func() override {
        std::cout << "son::func" << std::endl;
    }
};

class son2:public base{
public:
    void func() override {
        std::cout << "son2::func" << std::endl;
    }
};

void test01(){
    //base b;  �������޷�ʵ�������󣬻ᱨ��
    //new base; ��
    base *a = new son;
    a -> func();
}

void test02(){
    base *b = new son2;
    b->func();
}

int main(){
    test01();
    test02();
    return 0;
}