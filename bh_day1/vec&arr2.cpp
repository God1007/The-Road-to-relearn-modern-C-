#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int row, col;
    cout << "��������������: ";
    cin >> row >> col;

    vector<vector<int>> num(row, vector<int>(col));
    array<array<int, 2>, 2> num2 = { {{1, 1}, {1, 1}} };

    cout << "���� " << row << " �� " << col << " �еľ���:" << endl;
    for (auto i = 0u; i < num.size(); i++) {
        for (auto j = 0u; j < num[i].size(); j++) {
            cin >> num[i][j];
        }
    }

    cout << "����ľ���Ϊ:" << endl;
    for (auto i = 0u; i < num.size(); i++) {
        for (auto j = 0u; j < num[i].size(); j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    // Vector����
    cout << "num������׵�ַΪ: " << num.data() << endl;
    cout << "num�����һ��Ԫ�صĵ�ַΪ: " << &num[0][0] << endl;

    // Array����
    cout << "num2������׵�ַΪ: " << num2.data() << endl;
    cout << "num2�����һ��Ԫ�صĵ�ַΪ: " << &num2[0][0] << endl;

    return 0;
}