#include<iostream>
#include<fstream>

//�������ļ�
//�򿪷�ʽҪָ��Ϊios::binary

//��Ҫ������������ó�Ա���� write
//����ԭ�� ostream& write(const char * buffer, int len)
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���

class person{
public:
    char name[64];
    int age;
};

void test(){
    //1������ͷ�ļ�
    //2������������
    std::ofstream ofs;
    //�����ںϵڶ����͵����� std::ofstream ofs("person.txt",std::ios::on|std::ios::binary);
    //3�����ļ�
    ofs.open("person.txt",std::ios::out | std::ios::binary);
    //4��д�ļ�
    person p = {"����",18};
    ofs.write((const char *)&p,sizeof(person));
    //5���ر��ļ�
    ofs.close();
}

int main(){
    test();
    return 0;
}