#include<iostream>

//�������������
//ͨ�����ص��������

class Myint{
public:
    int num = 1;
    //ǰ������++����
    Myint& operator++(){ //��������ȷ�����ǿ������Ƕ�һ��Ŀ����в���
        num++;
        return *this; //��Ϊthis��ָ�룬��Ҫ������
    }

    //���õ���
    Myint operator++(int){ //int����ռλ��������������ǰ�úͺ���
        //�ȼ�¼���ٵ��������ؼ�¼ֵ
        Myint temp = *this;
        num++;
        return temp;
    }
};


//���õ���

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