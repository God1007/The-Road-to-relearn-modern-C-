#include<iostream>
#include<string>

using namespace std;


struct Student{
    string name;
    int age;
    int score;
};

int main()
{
    //结构体数组
    //1、创建一个结构体
    //2、创建结构体数组
    //3、给结构体数组赋值
    //4、遍历结构体数组
    struct Student stuarray[3] = {
        {"mike", 18,100},
        {"john", 18, 89},
        {"cici", 19, 98},
    };
    cout << stuarray[0].name << endl;
    return 0;
}