#include<iostream>
#include<string>

using namespace std;

struct student{
    string name;
    int age;
    int score;
};
//����ָ����Լ�С�ռ����ģ���const��������ṹ���е����ݱ��޸ģ���֤����������
void printinfo(const student *s){
    cout << s->age << " " << s->name << " " << s->score << endl;
}

int main()
{
    //const�ڽṹ���е�ʹ��
    student stu1 = {"mike",18,100};
    printinfo(&stu1);

}