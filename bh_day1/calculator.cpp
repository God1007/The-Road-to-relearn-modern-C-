//��̬����һ���������
/*
�����������ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
*/
/*
��̬���ŵ㣺
1��������֯�ṹǿ
2���ɶ���ǿ
3������ǰ�ںͺ��ڵ���չ��ά��*/

//��ͨʵ��
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
    std::cout << "��ӵĽ��Ϊ" << cal.getresult("+")<<std::endl;
    std::cout << "����Ľ��Ϊ" << cal.getresult("-")<<std::endl;
    std::cout << "��˵Ľ��Ϊ" << cal.getresult("*")<<std::endl;
    // std::cout << "����Ľ��Ϊ" << cal.getresult("/")<<std::endl;
}

//����ʵ�����У��ᳫ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�

//���ö�̬
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
    //�ӷ�����
    abstractcalculator *abc = new add;
    abc -> m_Num1 = 10;
    abc -> m_Num2 = 20;
    std::cout << abc->getresult() << std::endl;
    //����ǵ�����
    delete abc;
    //��������
    abc = new minus;
    abc -> m_Num1 = 10;
    abc -> m_Num2 = 20;
    std::cout << abc->getresult() << std::endl;
    //�˷�
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