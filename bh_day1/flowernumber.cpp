#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// ˮ�ɻ����ж���һ����λ����ÿ��λ�ϵ����ֵ�3����֮�͵���������
int main()
{
    int input = 100;
    do
    {
        if (pow((input / 100),3) + pow(((input % 100) / 10),3) + pow(input % 10,3) == input)
            cout << input << "��һ��ˮ�ɻ�����" << endl;
        input++;
    }while(input < 999);
    return 0;
}