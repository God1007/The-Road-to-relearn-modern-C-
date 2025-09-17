#include<iostream>

//递增运算符重载
//通过重载递增运算符

class Myint{
public:
    int num = 1;
    //前至重载++递增
    Myint& operator++(){ //加引用是确保不是拷贝而是对一个目标进行操作
        num++;
        return *this; //因为this是指针，需要解引用
    }

    //后置递增
    Myint operator++(int){ //int代表占位参数，用于区分前置和后置
        //先记录，再递增，返回记录值
        Myint temp = *this;
        num++;
        return temp;
    }
};


//后置递增

std::ostream &operator <<(std::ostream &os, const Myint &k){
    os << k.num << std::endl;
    return os;
}



void test01(){
    Myint k;
    std::cout << ++k << std::endl;
}

void test02(){
    Myint k;
    std::cout << k++ << std::endl;
    std::cout << ++k << std::endl;
}


int main(){
    test02();
}