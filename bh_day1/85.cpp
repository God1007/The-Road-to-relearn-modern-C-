#include<iostream>
#include<string>


//�̳��еĶ���ģ��
//�Ӹ���̳й����ĳ�Ա����Щ�������������

class Base{
public:
    int a;
private:
    int b;
protected:
    int c;
};

class son:public Base{
    public:
        int d;
};

void test01(){
    son s1;
    std::cout << sizeof(s1) << std::endl;
    //privateҲ�ǻᱻ�̳������ģ�ֻ���޷�����
    //�����е����зǾ�̬��Ա���Զ��ᱻ����̳�
    //�����е�˽�г�Ա�����Ǳ��������������ˣ�����޷����ʣ�����ȷʵ�Ǳ�������
}
int main(){
    test01();
    return 0;
}

// cl /d1 reportSingleClassLayout ���� ������visual Studio�Ŀ�����Ա������ʾ�����￴�಼��