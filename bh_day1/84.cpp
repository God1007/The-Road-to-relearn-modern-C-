#include<iostream>
#include<string>

/*
�̳з�ʽһ��������
�����̳�
�����̳�
˽�м̳�
*/

class Base1{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Son1:public Base1{
public:
    void func(){
        a = 10;
        b = 10;
        //c = 10; �޷����ʣ���Ϊ�����private��Ա�޷����̳�
    }
};

void test01(){
    Son1 s1;
    s1.a = 100;
    //s1.b = 100; b��public�̳�������protected
}

//�����̳�
class Base2{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Son2: protected Base2{
    public:
    void func(){
        a = 100; //a������public�����ڱ����protected
        b = 100; //c�����޷�����
    }   
};

void test02(){
    Son2 s2;
    //s2.a = 1000; �޷������ʣ���ΪȨ�ޱ��protected
    //s2.b = 1999; ������protected

}

class Base3{
   public:
    int a;
protected:
    int b;
private:
    int c; 
};

class Son3:private Base3{
public:
    void func(){
        a = 1000;
        b = 1000;
    }
};

void test03(){
    Son3 s3;
    // s3.a = 1000;
    // s3.b = 2000;
    // ������a��b��private�̳к󶼱����private�������޷�����
}

class Grandson3:public Son3{
public:
    void func(){
        //a = 1000; �޷��̳�privateȨ������
    }
};


int main(){
    return 0;
}