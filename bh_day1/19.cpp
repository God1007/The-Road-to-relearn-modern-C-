#include<iostream>
#include<string>
using namespace std;

int main()
{
    //C++�����ֳ������нṹ��
    // ˳��ṹ����˳��ִ�У���������ת
    // ѡ��ṹ����������ѡ��ִ�в�ͬ�Ĵ����
    // ѭ���ṹ���ظ�ִ��ĳ�δ��룬ֱ������ĳ������
    /*
    if��䣺if(����){��������ִ�е����}
    if(a>0){a++;}
    if���������治Ҫ�ӷֺţ���Ȼ�ǲ���ִ�����if��������
    */
    int a;
    cout << "input a:" << endl;
    cin >> a;
    if(a > 0)
    {
        cout << "congratulations!" << endl;
    }
    else if (a == 0)
    {
        cout << "sorry!" << endl;
    }
    else
    {
        cout << "error!" << endl;
    }
    system("pause");
    return 0;
}