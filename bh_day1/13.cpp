#include <iostream>
#include<string>

using namespace std;

int main()
{
    //bool类型 true为真1，false为假0，只占用1个字节大小
    bool flag = true;
    cout << "flag的大小：" << sizeof(flag) << "字节" << endl;
    cout << "flag的值：" << flag << endl;

    return 0;
}