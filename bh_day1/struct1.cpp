#include<iostream>
#include<string>
using namespace std;

struct Student
{
    string name;
    int score;
};


struct Teacher{
    string name;
    Student stu[5];
};

void inputinfo(Teacher *s)
{
    cin >> s->name;
    for(auto i = 0;i < 5;i++)
    {    
        cout << "input the student name:"<< endl; 
        cin >> s->stu[i].name;
        cout << "input the student's score:"<<endl;
        cin >> s->stu[i].score;
    }

}

void printinfo(Teacher *s, int teachercount)
{ 
    for(int t = 0; t < teachercount; t++)
    {
        cout << "\n=== Teacher Info ===" << endl;
        cout << "Teacher Name: " << s[t].name << endl;
        cout << "=== Students ===" << endl;
        
        for(int i = 0; i < 5; i++)
        {
            cout << "Student " << i+1 << ": " 
                 << s[t].stu[i].name 
                 << " - Score: " << s[t].stu[i].score << endl;
        }
    }
}

int main()
{
    Teacher teacher[3];
    for(size_t i = 0; i < sizeof(teacher)/sizeof(teacher[0]);i++)
    {
        inputinfo(&teacher[i]);
    }
    int teachercount = sizeof(teacher)/sizeof(teacher[0]);
    printinfo(teacher,teachercount);
    return 0;
}