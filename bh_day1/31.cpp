#include<iostream>
#include<array>
#include<cmath>
#include<iterator>

using namespace std;

int main()
{
    //���������ֶ��巽���������о���C���������鶼����������
    //�����Ƿ����������ڴ�ռ���
    //�����е�ÿ��Ԫ�ض�����ͬ��������
    //�����±��0��ʼ
    int a[10];
    int b[3] = {1,2,3}; // ûд��Ĭ����0���
    int c[] = {1,2,3,4,5};

    //�����ִ���C++д��
    array<int,5> d = {1,2,3,4,5};


    //�±긳ֵ
    a[0] = 100;
    b[0] = 100;
    cout << a[0] << endl;
    cout << sizeof(b)/sizeof(b[0]) << endl; // ��������Ҳ����ʹ��sizeof()����ȡ���鳤�ȣ�������Ϊ���ڴ��С��������Ҫ��һ��
    cout << size(c) << endl; // ���������������iteratorͷ�ļ����size()����ȡ���鳤��
    cout << d.size() << endl; // d.size() ֻ������ std::array��std::vector ��STL����
    cout << b << endl; //���������׵�ַ
    cout << (void*)a << endl;
    cout << d.data() << endl;
    return 0;
}