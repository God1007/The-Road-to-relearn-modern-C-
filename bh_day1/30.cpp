#include<iostream>
using namespace std;

int main()
{
    //goto��䣺������������ת��䣬�����Ǵ��ڣ�ִ�е�goto���ͻ�ֱ�ӷɹ�ȥ
    //���Ǿ�����ʹ��goto��䣬��Ϊ�ᵼ�´���Ŀɶ��Ա�ͣ��ṹ��úܻ���
    cout << "1" << endl;
    goto FLAG;
    cout << "2" <<endl;
    cout << "3" << endl;
    FLAG: // �ӵ���ð��
    {
        cout << "4" << endl;
        cout << "5" << endl;
    }
    return 0;
}