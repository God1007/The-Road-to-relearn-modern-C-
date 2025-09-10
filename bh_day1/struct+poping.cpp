#include<iostream>
#include<string>
#include<ctime>

using namespace std;

struct Hero{
    string name;
    int age;
    string gender;
};

void inputinfo(Hero *s, int num)
{
    for(auto i = 0;i<num;i++)
    {
        cout << "请输入英雄的名字、年龄和性别："<<endl;
        cin >> s[i].name >> s[i].age >> s[i].gender;
    }
}

void poping_sort(Hero *s, int num){
    for(auto i =0;i<num-1;i++)
    {
        for(auto j =0;j<num-i-1;j++)
        {
            if(s[j].age > s[j+1].age)
            {
                Hero temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

void output(const Hero *s, int num)
{
    cout << "排序后的信息为：" << endl;
    for(auto i = 0;i<num;i++)
    {
        cout << "角色信息： "<<endl;
        cout << s[i].name << " " << s[i].age << " " << s[i].gender << endl;
    }
}

int main()
{
    Hero heroes[5];
    int heronum = sizeof(heroes)/sizeof(heroes[0]);
    inputinfo(heroes, heronum);
    poping_sort(heroes, heronum);
    output(heroes,heronum);
    return 0;
}