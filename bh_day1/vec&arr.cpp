#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main()
{
    int row,col;
    cin >> row;
    cin >> col;
    //动态二维数组
    vector<vector<int>> num (row,vector<int>(col));
    array<array<int,2>, 2> num2 = {1,1,1,1};
    for(auto i = 0u; i < num.size();i++)
        for(auto j = 0u; j < num[i].size();j++)
            cin >> num[i][j];
    for(auto i = 0u;i<num.size();i++)
        for(auto j = 0u;j < num[i].size();j++)
            cout << num[i][j];
    //Vector取址
    cout << "num数组的首地址为： " << num.data() << endl;
    cout << "num数组第一个元素的的地址为： " << &num[0] << endl;
    cout << "num数组对象的地址为： " << &num << endl;
    //Array取址
    cout << "num2数组的首地址为： " << num2.data() << endl;
    cout << "num2数组第一个元素的的地址为： " << &num2[0] << endl;
    cout << "num2数组对象的地址为： " << &num2 << endl;



    return 0;

}