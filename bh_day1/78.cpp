#include<iostream>
#include<string>

class person{
friend std::ostream & operator<<(std::ostream &cout, person& p);
friend void test01();

private:
    int a;
    int b;

    //1����Ա��������
    //��Ϊ���ö�������һ�㲻�ó�Ա���������� <<
    // person operator << (???){
    // }
};

//�������������

// ȫ�ֺ�������
// std::ostream& operator << (std::ostream &cout, person &p){
//     cout << p.a << " " << p.b << std::endl;
//     return cout;
// }

std::ostream & operator<<(std::ostream &cout, person& p)
{
    cout << p.a <<  " " << p.b << std::endl;
    return cout;
}


void test01(){
    person p;
    p.a = 10;
    p.b = 20;
    std::cout << p.a << " " << p.b << std::endl;
    std::cout << p << std::endl;
}

int main(){
    test01();
    return 0;
}