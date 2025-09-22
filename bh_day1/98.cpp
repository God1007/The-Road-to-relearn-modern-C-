#include<iostream>
#include<fstream>

//���ļ�
//��Ҫ������������ó�Ա����read
//����ԭ�� istream& read(char *buffer,int len)
//�ַ�ָ��bufferָ���ڴ��е�һ�δ洢�ռ䣬len�Ƕ�д���ֽ���

class person{
public:
    char name[64];
    int age;
};

void test01(){
    //1������ͷ�ļ�
    //2������������
    std::ifstream ifs("person.txt",std::ios::in|std::ios::binary);
    //3�����ļ����ж��Ƿ�򿪳ɹ���
    if(!ifs.is_open()){
        std::cout << "�ļ���ʧ��" << std::endl;
        return;
    }
    //4�����ļ�
    person p;
    ifs.read((char*)&p, sizeof(person));
    std::cout << p.name << " " << p.age << std::endl;
    //5���ر��ļ�
    ifs.close();
}

int main(){
    test01();
    return 0;
}