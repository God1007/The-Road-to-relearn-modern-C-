#include<iostream>
#include<string>

using namespace std;

int main()
{
    cout << "��������ĸ߿��ɼ������� ";
    int score;
    cin >> score;
    if(score > 600)
    {
        cout << "��ϲ�㿼��һ����"<<endl;
    }
    else if(score > 500)
    {
        cout << "��ϲ�㿼�϶�����"<<endl;
    }
    else if(score > 400)
    {
        cout << "��ϲ�㿼��������"<<endl;
    }
    else
    {
        cout << "δ���ϱ���" << endl;
    }
    system("pause");
    return 0;
}