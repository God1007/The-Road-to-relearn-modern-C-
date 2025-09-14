#include<iostream>
#include<string>

//struct 和 class 的区别:默认访问权限不同
//struct默认是公有
//class默认是私有

class c1{
    int m_1;
};

struct c2
{
    int m_2;   
};


int main()
{
    c1 c3;
    //c3.m_1;
    c2 c4;
    c4.m_2;
}