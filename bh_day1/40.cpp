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
    //�ṹ������
    //1������һ���ṹ��
    //2�������ṹ������
    //3�����ṹ�����鸳ֵ
    //4�������ṹ������
    struct Student stuarray[3] = {
        {"mike", 18,100},
        {"john", 18, 89},
        {"cici", 19, 98},
    };
    cout << stuarray[0].name << endl;
    return 0;
}