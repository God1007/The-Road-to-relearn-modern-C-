#include<iostream>
#include<string>
#include<ctime>
using namespace std;



struct Student{
    string name;
    int score;
};

struct Teacher{
    string name;
    Student stu[5];
};

void inputinfo(Teacher *s){
    cout << "teacher's name:"<<endl;
    cin >> s->name;
    for(auto j = 0;j < 5;j++)
    {
        cout << "student info:" << endl;
        cout << "ѧ����������"<< endl;
        cin >> s->stu[j].name;
        cout << "ѧ���ĳɼ���"<< endl;
        cin >> s->stu[j].score;
    }
}

void printinfo(Teacher *s, int n)
{
    for(auto i = 0;i < n;i++)
    {
        cout << "��ʦ����Ϊ��"<< endl;
        cout << s[i].name;
        for(auto j = 0;j < 5;j++)
        {
            cout << "ѧ������Ϊ��"<< endl;
            cout << s[i].stu[j].name;
            cout << "ѧ���ɼ�Ϊ��"<< endl;
            cout << s[i].stu[j].score;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    Teacher tech[3];
    int technum = sizeof(tech)/sizeof(tech[0]);
    for(auto i = 0;i< technum;i++)
    {
        inputinfo(&tech[i]);
    }
    printinfo(tech, technum);
    return 0;
}