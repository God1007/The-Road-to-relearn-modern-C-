#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main()
{
    int row,col;
    cin >> row;
    cin >> col;
    //��̬��ά����
    vector<vector<int>> num (row,vector<int>(col));
    array<array<int,2>, 2> num2 = {1,1,1,1};
    for(auto i = 0u; i < num.size();i++)
        for(auto j = 0u; j < num[i].size();j++)
            cin >> num[i][j];
    for(auto i = 0u;i<num.size();i++)
        for(auto j = 0u;j < num[i].size();j++)
            cout << num[i][j];
    //Vectorȡַ
    cout << "num������׵�ַΪ�� " << num.data() << endl;
    cout << "num�����һ��Ԫ�صĵĵ�ַΪ�� " << &num[0] << endl;
    cout << "num�������ĵ�ַΪ�� " << &num << endl;
    //Arrayȡַ
    cout << "num2������׵�ַΪ�� " << num2.data() << endl;
    cout << "num2�����һ��Ԫ�صĵĵ�ַΪ�� " << &num2[0] << endl;
    cout << "num2�������ĵ�ַΪ�� " << &num2 << endl;



    return 0;

}