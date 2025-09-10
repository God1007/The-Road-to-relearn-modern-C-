#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int row, col;
    cout << "输入行数和列数: ";
    cin >> row >> col;

    vector<vector<int>> num(row, vector<int>(col));
    array<array<int, 2>, 2> num2 = { {{1, 1}, {1, 1}} };

    cout << "输入 " << row << " 行 " << col << " 列的矩阵:" << endl;
    for (auto i = 0u; i < num.size(); i++) {
        for (auto j = 0u; j < num[i].size(); j++) {
            cin >> num[i][j];
        }
    }

    cout << "输出的矩阵为:" << endl;
    for (auto i = 0u; i < num.size(); i++) {
        for (auto j = 0u; j < num[i].size(); j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    // Vector属性
    cout << "num数组的首地址为: " << num.data() << endl;
    cout << "num数组第一个元素的地址为: " << &num[0][0] << endl;

    // Array属性
    cout << "num2数组的首地址为: " << num2.data() << endl;
    cout << "num2数组第一个元素的地址为: " << &num2[0][0] << endl;

    return 0;
}