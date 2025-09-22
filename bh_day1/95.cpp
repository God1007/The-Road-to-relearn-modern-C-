#include<iostream>
#include<fstream>

//�ļ�����
/*
ͨ���ļ����Խ����ݳ־û�
C++�ж��ļ�������Ҫ����ͷ�ļ�<fstream>

�ļ����ͷ�Ϊ���֣�
1���ı��ļ� -�ļ����ı���ASCII����ʽ�洢�ڼ������
2���������ļ� -�ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û��޷�ֱ�Ӷ���

�����ļ��������ࣺ
1��ofstream д����
2��ifstream ������
3��fstream  ��д����
*/

/*
д�ļ�����
1������ͷ�ļ�
2������������ ofstream ofs
3�����ļ� ofs.open("�ļ�·��",�򿪷�ʽ)
4��д���� ofs << "д�������"
5���ر��ļ� ofs.close()
*/

/*
�ļ��򿪷�ʽ
ios::in Ϊ���ļ����ļ�
ios::out Ϊд�ļ����ļ�
ios::binary �����Ʒ�ʽ
ios::ate ��ʼλ�ã��ļ�β
ios::trunc ����ļ�������ɾ�����ڴ���

�������ʹ�ã��� | �Ϳ�����
ios::in | ios::binary
*/

void test(){
    //����������
    std::ofstream ofs;
    ofs.open("test.txt",std::ios::out);
    ofs << "TestContent" << std::endl;
    ofs << "MEME" << std::endl;
    ofs.close();
    std::cout << "�ļ��������" << std::endl;
}

int main(){
    test();
    return 0;
}