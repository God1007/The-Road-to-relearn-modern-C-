#include<iostream>
#include<string>

//案例描述：电脑主要组成部件为 cpu（用于计算）、显卡（用于显示）、内存条（用于存储）
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intell厂商和lenevo厂商
//创建电脑类提供给电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作

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
        std::cout << "Intel的cpu正在计算" << std::endl;
    }
    ~Intel_CPU(){
        std::cout << "Intel的cpu使用完毕" <<std::endl;
    }
};

class Lenevo_CPU:public cpu{
public:
    void calculator(){
        std::cout << "Lenevo的cpu正在计算" << std::endl;
    }
    ~Lenevo_CPU(){
        std::cout << "Lenevo的cpu使用完毕" << std::endl;
    }
};

class Intel_videocard:public videocard{
public:
    void display(){
        std::cout << "Intel的videocard正在显示" << std::endl;
    }
    ~Intel_videocard(){
        std::cout << "Intel的videocard使用完毕" << std::endl;
    }
};

class Lenevo_videocard:public videocard{
public:
    void display(){
        std::cout << "Lenevo的videocard正在显示" << std::endl;
    }
    ~Lenevo_videocard(){
        std::cout << "Lenevo的videocard使用完毕" << std::endl;
    }
};

class Intel_memory:public memory{
public:
    void store(){
        std::cout << "Intel的memory正在存储" << std::endl;
    }
    ~Intel_memory(){
        std::cout << "Intel的memory使用完毕" << std::endl;
    }
};

class Lenevo_memory:public memory{
public:
    void store(){
        std::cout << "Lenevo的memory正在存储" << std::endl;
    }
    ~Lenevo_memory(){
        std::cout << "Lenevo的memory使用完毕" << std::endl;
    }
};


class Computer_1:public Lenevo_CPU,public Lenevo_memory,public Lenevo_videocard{
public:
    Computer_1(){
        std::cout << "Lenevo计算机搭建完毕" << std::endl;
    }
    ~Computer_1(){
        std::cout << "Lenevo计算机运行完毕" << std::endl;
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