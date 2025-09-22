#include<iostream>
#include<string>

//����������������Ҫ��ɲ���Ϊ cpu�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
//��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intell���̺�lenevo����
//�����������ṩ�����Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���

class cpu{
public:
    virtual void calculator() = 0;
    virtual ~cpu(){};
};

class videocard{
public:
    virtual void display() = 0;
    virtual ~videocard(){};
};

class memory{
public:
    virtual void store() = 0;
    virtual ~memory(){}
};


class Intel_CPU:public cpu{
public:
    void calculator(){
        std::cout << "Intel��cpu���ڼ���" << std::endl;
    }
    ~Intel_CPU(){
        std::cout << "Intel��cpuʹ�����" <<std::endl;
    }
};

class Lenevo_CPU:public cpu{
public:
    void calculator(){
        std::cout << "Lenevo��cpu���ڼ���" << std::endl;
    }
    ~Lenevo_CPU(){
        std::cout << "Lenevo��cpuʹ�����" << std::endl;
    }
};

class Intel_videocard:public videocard{
public:
    void display(){
        std::cout << "Intel��videocard������ʾ" << std::endl;
    }
    ~Intel_videocard(){
        std::cout << "Intel��videocardʹ�����" << std::endl;
    }
};

class Lenevo_videocard:public videocard{
public:
    void display(){
        std::cout << "Lenevo��videocard������ʾ" << std::endl;
    }
    ~Lenevo_videocard(){
        std::cout << "Lenevo��videocardʹ�����" << std::endl;
    }
};

class Intel_memory:public memory{
public:
    void store(){
        std::cout << "Intel��memory���ڴ洢" << std::endl;
    }
    ~Intel_memory(){
        std::cout << "Intel��memoryʹ�����" << std::endl;
    }
};

class Lenevo_memory:public memory{
public:
    void store(){
        std::cout << "Lenevo��memory���ڴ洢" << std::endl;
    }
    ~Lenevo_memory(){
        std::cout << "Lenevo��memoryʹ�����" << std::endl;
    }
};


class Computer_1:public Lenevo_CPU,public Lenevo_memory,public Lenevo_videocard{
public:
    Computer_1(){
        std::cout << "Lenevo���������" << std::endl;
    }
    ~Computer_1(){
        std::cout << "Lenevo������������" << std::endl;
    }
};

void Lenevo_computer(){
    Computer_1 c;
    c.calculator();
    c.display();
    c.store();
}

int main(){
    Lenevo_computer();
    return 0;
}