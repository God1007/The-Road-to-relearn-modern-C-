#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main()
{
    //ָ��������,����ָ����������е�Ԫ��
    vector<int> num = {1, 2, 3, 4, 5};
    int* p = num.data(); // ��ȷ�ķ�ʽ����ȡvector�ڲ������ָ��

    // ʹ��ָ�����Ԫ��
    cout << *p << endl;        // �����һ��Ԫ��: 1
    cout << *(p + 2) << endl;  // ���������Ԫ��: 3vector<int> num = {1, 2, 3, 4, 5};

    int *p2 = num.data();
    for(size_t i = 0;i < num.size(); i++)
    {
        cout << *p2 << endl;
        p2++;
    }
    

}