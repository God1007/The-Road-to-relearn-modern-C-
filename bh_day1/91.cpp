#include<iostream>

//��̬
/*
��̬��Ϊ���ࣺ
��̬��̬���������غ�������������ھ�̬��̬�����ú�����
�����Ķ�̬����ǣ���̬��̬����������麯��ʵ������ʱ��̬
*/
/*
��̬��̬�ĺ�����ַ���~����׶�ȷ��������ַ
��̬��̬�ĺ�����ַ���~���н׶�ȷ��������ַ
*/

class Animal{
    public:
    virtual void speak(){
        std::cout << "speak" << std::endl;
    }
};

class cat:public Animal{
    public:
    void speak(){ //���Ǽ������麯��
        std::cout << "cat speak" <<std::endl;
    }
};

class dog:public Animal{
public:
    void speak(){
        std::cout << "dog speak" <<std::endl;
    }
};

//ִ��˵���ĺ���
void dospeak(Animal &animal){ //��Ҫ����Animal��������cat Animal &animal = cat ��C++�и����ǿ���ֱ��ָ�������
    animal.speak(); //���Ե����ǵ�������һ��speak��
    //��ʵ�ǵ�����Animal����Ϊ����ĵ�ַ�����Animal���ˣ��ڱ���׶ξ�ȷ��������ַ��
}

void test(){
    cat cat;
    dospeak(cat); //�������ǵı���������è˵����������Ҫ�ú�����ַ��󶨣���̬��̬��
    dog dog;
    dospeak(dog);
}
//��̬��̬����������
//1�������м̳й�ϵ
//2������Ҫ��д������麯�� (�������غ���д)
void test02(){
    std::cout << sizeof(Animal) <<std::endl; //�����麯��֮�󣬴�С��1�����8��ԭ���������һ��vfptrָ�루�麯������ָ�룩
    //���vftpr��ָ��һ���麯����vftable�������ڼ�¼�麯����ַ��&Animal::speak��
    //����Ҳ��̳����vfptr��Ҳ��ָ�������Լ���vftable��&Animal::speak�������������д���������Լ���vftable��һ����д�������&cat::speak
    //�������ָ�������ָ����������ʱ�򣬾ͻᷢ����̬
}
//��̬��̬��ʹ��
// �����ָ��������� ָ���������



int main(){
    test02();
    return 0;
}