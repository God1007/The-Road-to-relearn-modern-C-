#include<iostream>
#include<fstream>

//二进制文件
//打开方式要指定为ios::binary

//主要利用流对象调用成员函数 write
//函数原型 ostream& write(const char * buffer, int len)
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数

class person{
public:
    char name[64];
    int age;
};

void test(){
    //1、包含头文件
    //2、创建流对象
    std::ofstream ofs;
    //可以融合第二步和第三步 std::ofstream ofs("person.txt",std::ios::on|std::ios::binary);
    //3、打开文件
    ofs.open("person.txt",std::ios::out | std::ios::binary);
    //4、写文件
    person p = {"张三",18};
    ofs.write((const char *)&p,sizeof(person));
    //5、关闭文件
    ofs.close();
}

int main(){
    test();
    return 0;
}