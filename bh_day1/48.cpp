#include<iostream>
#include<cstdint>

using namespace std;

int* func()
{
    int *p = new int(10); //���ص�����������ָ��
    return p;
}

void tets1()
{
    int *p = func();
    cout << *p << endl;
    //�����������ɳ���Ա����
    // delete p;
    cout << *p << endl;
}

//������������
void test2()
{
    //����10�������ݵ����飬�ڶ���
    int *arr = new int[10]; //�����������飬С�����ǵ���Ԫ��,���ص���ָ�룬ָ���������ĵ�һ��Ԫ��
    for(int i =0;i<10;i++)
    {
        arr[i] = 100+i;
    }
    for(int j =0;j<10;j++)
    {
        cout << arr[j] <<endl;
    }
    //�ͷ�����Ҫ��һ��������delete[] arr;
}

int main()
{
    //ʹ��delete���ֶ��ͷ��ڴ�
    int *p = func();
    cout << *p <<endl;
    tets1();
    test2();
    return 0;
}