//多态案例一：计算机类
/*
案例描述：分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
*/
/*
多态的优点：
1、代码组织结构强
2、可读性强
3、利于前期和后期的扩展和维护*/

//普通实现
#include<iostream>
#include<string>


class calculator{
    public:
    int m_Num1;
    int m_Num2;

    int getresult(std::string oper){
        if(oper == "+"){
            return m_Num1 + m_Num2;
        }
        else if(oper == "-"){
            return m_Num1 - m_Num2;
        }
        else if(oper == "*"){
            return m_Num1 * m_Num2;
        }
    }
};

void test01(){
    calculator cal;
    cal.m_Num1 = 20;
    cal.m_Num2 = 10;
    std::cout << "相加的结果为" << cal.getresult("+")<<std::endl;
    std::cout << "相减的结果为" << cal.getresult("-")<<std::endl;
    std::cout << "相乘的结果为" << cal.getresult("*")<<std::endl;
    // std::cout << "相除的结果为" << cal.getresult("/")<<std::endl;
}

//在真实开发中，提倡开闭原则：对扩展进行开放，对修改进行关闭

//利用多态
class abstractcalculator{
public:
    int m_Num1;
    int m_Num2;
    virtual int getresult(){
        return 0;
    }
};

class add:public abstractcalculator{
    public:
    int getresult(){
        return m_Num1 + m_Num2;
    }
};

class minus:public abstractcalculator{
public:
    int getresult(){
        return m_Num1 - m_Num2;
    }
};

class multi:public abstractcalculator{
    public:
    int getresult(){
        return m_Num1 * m_Num2;
    }
};

void test02(){
    //加法运算
    abstractcalculator *abc = new add;
    abc -> m_Num1 = 10;
    abc -> m_Num2 = 20;
    std::cout << abc->getresult() << std::endl;
    //用完记得销毁
    delete abc;
    //减法运算
    abc = new minus;
    abc -> m_Num1 = 10;
    abc -> m_Num2 = 20;
    std::cout << abc->getresult() << std::endl;
    //乘法
    delete abc;
    abc = new multi;
    abc -> m_Num1 = 10;
    abc -> m_Num2 = 20;
    std::cout << abc->getresult() << std::endl;
}

int main(){
    // test01();
    test02();
    return 0;
}