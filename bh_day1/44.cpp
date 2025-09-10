#include<iostream>
#include<string>

using namespace std;

struct student{
    string name;
    int age;
    int score;
};
//利用指针可以减小空间消耗，加const是怕这个结构体中的数据被修改，保证数据完整性
void printinfo(const student *s){
    cout << s->age << " " << s->name << " " << s->score << endl;
}

int main()
{
    //const在结构体中的使用
    student stu1 = {"mike",18,100};
    printinfo(&stu1);

}