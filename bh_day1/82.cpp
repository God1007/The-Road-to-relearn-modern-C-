#include<iostream>
#include<string>
// �����������������
// �����������������Ҳ��������
// �������غ�ʹ�õķ�ʽ��ǿ����ĵ��ã���˳�Ϊ�º���
// ��û�й̶�д�����ǳ����
class Myprint{
public:
    //���غ������������
    void operator()(std::string test){
        std::cout << test << std::endl;
    }
};

class MyAdd{
public:
    int num;
    void operator()(const int &a){
        this->num += a;
    }

    int operator()(int &a,int &b){
        std::cout << a + b << std::endl;
        return a + b;
    }

};

void MyPrint02(std::string text){
    std::cout << text << std::endl;
}

void test01(){
    Myprint myprint;
    myprint("HelloWorld!");
    //��Ϊ�������ǳ����ƺ������ã����Һ����
    MyPrint02("HelloWorld!");
}

void test02(){
    // MyAdd a;
    // a.num = 10;
    // a(10);
    // std::cout << a.num << std::endl;
    MyAdd add;
    int a = 10;
    int b = 10;
    int result = add(a,b);
    MyAdd()(a,b); //����������������MyAdd������add������������ͷ���
}

int main(){
    test02();
    return 0;
}