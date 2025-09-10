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
    //结构体指针
    //利用操作符->可以通过结构体指针访问结构体属性
    struct Student s = {"mike",18,100};
    struct Student *p = &s;
    cout << p->age << p->name << p->score << endl;
    return 0;
}