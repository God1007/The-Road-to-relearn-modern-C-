#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

struct teacher{
    string name;
    int age;
    struct student stu;
};

int main()
{
   //½á¹¹ÌåÇ¶Ì×
   struct teacher s1;
   s1.stu.name="mike";
   cout << s1.stu.name << endl;
   return 0;
}