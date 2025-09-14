#include<iostream>
#include<string>

class Student{
public:
    std::string name;
    std::string number;

    void showinfo(){
        std::cout << "The info of student:" << name << " " << number << std::endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Jared";
    s1.number = "11111";
    s1.showinfo();
    return 0;
}