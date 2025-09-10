#include<iostream>
#include<string>

using namespace std;

struct student{
    string name;
    int age;
    int score;
};

void printinfo(student s){
    cout << s.name << s.age << s.score << endl;
}

void printinfo2(student *s)
{
    s -> age = 100;
    cout << s->age << s->name << s->score <<endl;
}

int main()
{
 //结构体做函数参数
    student stu1 = {"mike", 18, 100};
    printinfo(stu1);
    printinfo2(&stu1);
    printinfo(stu1);
    return 0;
}