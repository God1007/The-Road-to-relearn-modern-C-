#include<iostream>

//���μ̳У���ʯ�̳У�

/*
����������̳�ͬһ������
����ĳ����ͬʱ�̳�����������
*/
/*
    o
   / \
  o   o
   \ /
    o
*/
/*
���μ̳����⣺
����ײ����������ϲ�����������ݵ�ʱ�򣬿��ܲ��������ԣ�������������
������һ�����⣬һ�����ݼ̳������ݣ����׸�ѡ����һ�ݣ�*/

class Animal{
public:
    int age;

    Animal():age(10){   
    }
    Animal(int val):age(val){
    }
};
//��̳У���ʱAnimal���������
//
class sheep:virtual public Animal{
public:
    sheep(int val = 15):Animal(val){   
    }
};

class tuo:virtual public Animal{
public:
    tuo(int val = 18):Animal(val){
    }
};

class sheeptuo:public sheep,public tuo{
public:

};
//�����ڼ̳е�ʱ�����һ��vbptr�������ָ�룩��ָ��һ����vbtable�����������������м�¼ƫ����
// virtual base pointer

void test01(){
    sheeptuo st;
    //st.sheep::age = 18; //�����������������
    //st.tuo::age = 28;
    std::cout << st.sheep::age << std::endl;
    std::cout << st.tuo::age << std::endl;
    std::cout << st.age << std::endl;

    //�������age����ʵֻ��Ҫһ�ݣ����������ݲ�������Դ�˷���
    //������̳п��Խ��������
}

int main(){
    test01();
    return 0;
}