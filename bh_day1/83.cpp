#include<iostream>
#include<string>

//�̳�
/*
����һЩ���ʱ���¼���ĳ�Աӵ����һ����Ա�Ĺ��Ժ��Լ������ԣ���ʱ����ʹ�ü̳��������ظ�����

*/
// class Java{
//     public:
//     void header(){
//         std::cout << "HEADER" << std::endl;
//     }
//     void footer(){
//         std::cout << "FOOTER" << std::endl;
//     }
//     void left(){
//         std::cout << "LEFT" << std::endl;
//     }
//     void content(){
//         std::cout << "CONTENT" << std::endl;
//     }
// };

//�̳�
class BasePage{//����ҳ��
public:
    void header(){
        std::cout << "HEADER" << std::endl;
    }
    void footer(){
        std::cout << "FOOTER" << std::endl;
    }
    void left(){
        std::cout << "LEFT" << std::endl;
    }
    void content(){
        std::cout << "CONTENT" << std::endl;
    }
};


//�﷨�� class ���� ���̳з�ʽ ����
//���ࣺҲ��Ϊ������    
//���ࣺҲ��Ϊ����

class Java : public BasePage{ //�̳�  ����/����
public:
    void javacontent(){
        std::cout << "JAVA" << std::endl;
    }
};

class Cpp : public BasePage{
public:
    void cppcontent(){
        std::cout << "cpp" << std::endl;
    }
};

void test01(){
    // Java ja;
    // ja.header();
    // ja.left();
    // ja.footer();
    // ja.content();
    Java ja;
    ja.content();
    ja.footer();
    ja.javacontent();
}

int main()
{
    test01();
    return 0;
}