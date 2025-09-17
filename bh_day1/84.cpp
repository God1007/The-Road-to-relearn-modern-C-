#include<iostream>
#include<string>

/*
继承方式一共有三种
公共继承
保护继承
私有继承
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
        //c = 10; 无法访问，因为父类的private成员无法被继承
    }
};

void test01(){
    Son1 s1;
    s1.a = 100;
    //s1.b = 100; b被public继承依旧是protected
}

//保护继承
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
        a = 100; //a本来是public，现在变成了protected
        b = 100; //c依旧无法访问
    }   
};

void test02(){
    Son2 s2;
    //s2.a = 1000; 无法被访问，因为权限变成protected
    //s2.b = 1999; 依旧是protected

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
    // 上述的a和b在private继承后都变成了private，类外无法访问
}

class Grandson3:public Son3{
public:
    void func(){
        //a = 1000; 无法继承private权限数据
    }
};


int main(){
    return 0;
}