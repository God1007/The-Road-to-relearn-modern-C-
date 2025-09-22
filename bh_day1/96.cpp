#include<iostream>
#include<fstream>
#include<string>
//���ļ�����
/*
1������ͷ�ļ�
2������������ ifstream ifs
3�����ļ����ж��Ƿ�� ifs.open("�ļ�·��",�򿪷�ʽ)
4�����ַ�ʽ��ȡ
5���ر��ļ� ifs.close()
*/

void test(){
    std::ifstream ifs;
    ifs.open("test.txt",std::ios::in);
    if (!ifs.is_open()){
        std::cout << "�ļ���ʧ��" << std::endl;
        return;
    }
    //��һ�ֶ�ȡ
    char buf[1024] = {0};
    while(ifs >> buf){
        std::cout << buf << std::endl;
    }
    //�ڶ��֣���Ϊָ���Ѿ����ļ�ĩβ������getline()����ʧ�ܣ��������ѭ��������close�����´�
    //����ʹ��ifs.clear();// �����״̬��־���ر���eof��־����ifs.seekg(0);// ��ָ���ƶ����ļ���ͷ
    ifs.clear();
    ifs.seekg(0);
    char buf2[1024] = {0};
    while(ifs.getline(buf2, sizeof(buf2))){
        std::cout << buf2 << std::endl;
    }
    ifs.clear();
    ifs.seekg(0);
    //������
    std::string buf3;
    while(getline(ifs,buf3)){
        std::cout << buf3 << std::endl;
    }
    ifs.clear();
    ifs.seekg(0);
    //������
    char c;
    while((c = ifs.get())!=EOF){//û���ļ�β
        std::cout << c;
    }

    ifs.close();

}

int main(){
    test();
    return 0;
}