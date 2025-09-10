#include<iostream>
#include<string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
    
    // 重载 << 运算符
    friend ostream& operator<<(ostream& os, const student& s)
    {
        os << "Name: " << s.name << ", Age: " << s.age << ", Score: " << s.score;
        return os;
    }
};

int main()
{
    struct student mike;
    mike.name = "mike";
    mike.age = 18;
    mike.score = 100;
    
    student John = {"john", 18, 100};
    cout << John << endl;  // 现在可以正常输出了
    
    return 0;
}