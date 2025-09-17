#include<iostream>
#include<string>

//关系运算符，主要有 == 和 ！=
class Person{
public:
    std::string m_name;
    int m_age;   
    
    Person(std::string name,int age):m_age(age),m_name(name){
    }
     
    
    bool operator ==(const Person &p)const{
        if(this->m_age == p.m_age && this->m_name == p.m_name){
            return true;
        }
        else {
            std :: cout << "不相等" <<std::endl;
            return false;
        }
    }

    bool operator!=(const Person &p)const{
        if(this->m_age != p.m_age || this->m_name != p.m_name){
            return true;
        }
        else {
            std :: cout << "相等" <<std::endl;
            return false;
        }
    }
};




void test01(){
    Person p1("ham",18);
    Person p2("ham",18);
    Person p3("ham",18);
    if(p1 == p2){
        std::cout <<"p1和p2和p3是相等的" << std::endl;
    }
    if(p1 != p2)
    {
        std::cout <<"p1和p2是不相等的" << std::endl;
    }
}

int main(){
    test01();
    return 0;
}