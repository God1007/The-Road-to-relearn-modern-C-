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
    //�ṹ��ָ��
    //���ò�����->����ͨ���ṹ��ָ����ʽṹ������
    struct Student s = {"mike",18,100};
    struct Student *p = &s;
    cout << p->age << p->name << p->score << endl;
    return 0;
}