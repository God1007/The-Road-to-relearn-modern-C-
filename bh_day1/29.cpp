#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    //continue��䣺��ѭ���������������ѭ��δִ�е���䣬������һ��ѭ��
    //break���˳�ѭ��������continue���ᣬֻ�ǽ�����һ��ѭ��
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if(j % 2 == 0)
                continue;
            cout << " * "; 
        }
        cout << endl;
    }
    return 0;
}