#include<iostream>
#include<string>
//抽象的cpu类
class cpu{
    public:
    //抽象的显示函数
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

    //工作函数,调用接口
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

//具体厂商
//Intel厂商

class IntelCPU:public cpu{
public:
    void calculate(){
        std::cout << "Intel开始计算" << std::endl;
    }
    ~IntelCPU(){
        std::cout << "intel计算完毕" << std::endl;
    }
};

class IntelVideocard:public videocard{
public:
    void display(){
        std::cout << "Intel开始显示" << std::endl;
    }
    ~IntelVideocard(){
        std::cout << "intel显示完毕" << std::endl;
    }
};

class IntelMemory:public memory{
public:
    void store(){
        std::cout << "Intel开始存储" << std::endl;
    }
    ~IntelMemory(){
        std::cout << "intel存储完毕" <<std::endl;
    }
};

//联想
class LenevoCPU:public cpu{
public:
    void calculate(){
        std::cout << "Lenevo开始计算" << std::endl;
    }
    ~LenevoCPU(){
        std::cout << "Lenevo计算完毕" << std::endl;
    }
};

class LenevoVideocard:public videocard{
public:
    void display(){
        std::cout << "Lenevo开始显示" << std::endl;
    }
    ~LenevoVideocard(){
        std::cout << "Lenevo显示完毕" << std::endl;
    }
};

class LenevoMemory:public memory{
public:
    void store(){
        std::cout << "Lenevo开始存储" << std::endl;
    }
    ~LenevoMemory(){
        std::cout << "lenevo存储完毕" << std::endl;
    }
};

void test01(){
    cpu *c = new IntelCPU;
    videocard *v = new IntelVideocard;
    memory *m = new IntelMemory;

    std::cout << "======第一台计算机：======" << std::endl;
    computer *computer1 = new computer(c, v, m);
    computer1->work();
    delete computer1;

    std::cout << "======第二台计算机：======" << std::endl;
    computer *computer2 = new computer(new LenevoCPU, new LenevoVideocard, new LenevoMemory);
    computer2->work();
    delete computer2;

    std::cout << "======第三台计算机：======" << std::endl;
    computer *computer3 = new computer(new IntelCPU, new LenevoVideocard, new IntelMemory);
    computer3->work();
    delete computer3;

}

int main(){
    test01();
    return 0;
}