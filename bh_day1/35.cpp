#include<iostream>
using namespace std;

int main()
{
    //��ָ��:ָ���ڴ��б��Ϊ0�Ŀռ䣬���ڳ�ʼ������ָ��ָ����ڴ��ǲ��ɷ��ʵ�
    int *p = NULL;
    // ����ֱ��д*p = 100��0~255���ڴ�����ϵͳռ�õģ����ɷ��ʣ�;
    int a = 100;
    p = &a;
    *p = 1000;
    cout << a << endl;
    return 0;
    //Ұָ�룺ָ��Ƿ��ڴ�ռ�
    //int *p = (int *)0x1011;
    
}