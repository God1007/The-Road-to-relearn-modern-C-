#include<iostream>
#include<string>
//�����cpu��
class cpu{
    public:
    //�������ʾ����
    virtual void calculate() = 0;
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
    virtual ~memory(){};
};

class computer{
public:
    computer(cpu *cc, videocard *vv, memory *mm):c(cc),v(vv),m(mm){}

    //��������,���ýӿ�
    void work(){
        c->calculate();
        v->display();
        m->store();
    }

    ~computer(){
        if(c!=NULL || v!=NULL || m!=NULL){
            delete c;
            delete v;
            delete m;
        }
    }

private:
    cpu *c;
    videocard *v;
    memory *m;
};

//���峧��
//Intel����

class IntelCPU:public cpu{
public:
    void calculate(){
        std::cout << "Intel��ʼ����" << std::endl;
    }
    ~IntelCPU(){
        std::cout << "intel�������" << std::endl;
    }
};

class IntelVideocard:public videocard{
public:
    void display(){
        std::cout << "Intel��ʼ��ʾ" << std::endl;
    }
    ~IntelVideocard(){
        std::cout << "intel��ʾ���" << std::endl;
    }
};

class IntelMemory:public memory{
public:
    void store(){
        std::cout << "Intel��ʼ�洢" << std::endl;
    }
    ~IntelMemory(){
        std::cout << "intel�洢���" <<std::endl;
    }
};

//����
class LenevoCPU:public cpu{
public:
    void calculate(){
        std::cout << "Lenevo��ʼ����" << std::endl;
    }
    ~LenevoCPU(){
        std::cout << "Lenevo�������" << std::endl;
    }
};

class LenevoVideocard:public videocard{
public:
    void display(){
        std::cout << "Lenevo��ʼ��ʾ" << std::endl;
    }
    ~LenevoVideocard(){
        std::cout << "Lenevo��ʾ���" << std::endl;
    }
};

class LenevoMemory:public memory{
public:
    void store(){
        std::cout << "Lenevo��ʼ�洢" << std::endl;
    }
    ~LenevoMemory(){
        std::cout << "lenevo�洢���" << std::endl;
    }
};

void test01(){
    cpu *c = new IntelCPU;
    videocard *v = new IntelVideocard;
    memory *m = new IntelMemory;

    std::cout << "======��һ̨�������======" << std::endl;
    computer *computer1 = new computer(c, v, m);
    computer1->work();
    delete computer1;

    std::cout << "======�ڶ�̨�������======" << std::endl;
    computer *computer2 = new computer(new LenevoCPU, new LenevoVideocard, new LenevoMemory);
    computer2->work();
    delete computer2;

    std::cout << "======����̨�������======" << std::endl;
    computer *computer3 = new computer(new IntelCPU, new LenevoVideocard, new IntelMemory);
    computer3->work();
    delete computer3;

}

int main(){
    test01();
    return 0;
}