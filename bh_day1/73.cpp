#include<iostream>

//��ָ����ʳ�Ա����
//c++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��

//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��

class Person{
    public:
    void showclassname(){
        std::cout << "This is Person class" << std::endl;
    }
    void showpersonage(){

        if(this == NULL){
            return;
        }

        std::cout << this->m_age << std::endl;
    }

    int m_age;
};

void test01(){
    Person *p = NULL;
    p -> showclassname(); //��������
    p -> showpersonage(); //û���жϵĻ���������

}



int main(){
    test01();
}