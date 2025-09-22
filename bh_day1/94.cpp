#include<iostream>
#include<string>
//�������ʹ�������

//��̬ʹ��ʱ����������������Կ��ٵ�����������ָ�����ͷ�ʱ�޷������������������
//����������������е����������ĳ����������ߴ�������

//�������ʹ��������Ĺ��ԣ�
//1�������Խ������ָ���ͷ��������
//2������Ҫ�о���ĺ���ʵ��

//��������
//����Ǵ����������������ڳ����࣬�޷�ʵ��������

//�������﷨��
// virtual ~����(){}
// ���������﷨��
// virtual ~����() = 0

class animal{
    public:
    animal(){
        std::cout << "animal���캯��" << std::endl;
    }

    // virtual ~animal(){ //�������������Խ������ָ���ͷ��������ʱ���ɾ�������
    //     std::cout << "animal��������" << std::endl;
    // }
    //��������,��һ�����ݿ��ٵ������أ���������������һ��Ҫ�ж���ģ�����ֻ�ǵ���������
    //���˴�������֮�������Ҳ���ڳ����࣬1�޷�ʵ��������
    virtual ~animal() = 0;

    virtual void speak() = 0;
}; 

animal::~animal(){
    std::cout << "animal������������" << std::endl;
 }



class cat:public animal{
public:
    cat(std::string name){
        std::cout << "cat���캯��" <<std::endl;
        this->name = new std::string(name);
    }

    void speak(){
        std::cout << *name << "cat spreak" << std::endl;
    }

    ~cat(){ //���︸����������ʱ���޷������������������������ڴ�й©
        std::cout << "cat ��������" << std::endl;
        if(name != NULL){
           delete name; 
        }

    }

    std::string *name; //�����ڶ�������ָ��ά����
};

void test01(){
    animal *a = new cat("Tom");
    a->speak();
    delete a;    
}

int main(){
    test01();
    return 0;
}