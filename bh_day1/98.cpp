#include<iostream>
#include<fstream>

//读文件
//主要利用流对象调用成员函数read
//函数原型 istream& read(char *buffer,int len)
//字符指针buffer指向内存中的一段存储空间，len是读写的字节数

class person{
public:
    char name[64];
    int age;
};

void test01(){
    //1、包含头文件
    //2、创建流对象
    std::ifstream ifs("person.txt",std::ios::in|std::ios::binary);
    //3、打开文件（判断是否打开成功）
    if(!ifs.is_open()){
        std::cout << "文件打开失败" << std::endl;
        return;
    }
    //4、读文件
    person p;
    ifs.read((char*)&p, sizeof(person));
    std::cout << p.name << " " << p.age << std::endl;
    //5、关闭文件
    ifs.close();
}

int main(){
    test01();
    return 0;
}