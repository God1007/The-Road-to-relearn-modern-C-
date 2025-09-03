#include<iostream>
#include<string>
#include<cmath>
using namespace std;


//程序需求: 有三只小猪称体重，请分别输入三只小猪的体重，并且判断哪只小猪最重
int main()
{
    int A,B,C;
    cout << "请输入三只小猪的体重，首先输入小猪A的体重（kg）：";
    cin >> A;
    cout << "其次输入小猪B的体重： ";
    cin >> B;
    cout << "最后输入小猪C的体重：";
    cin >> C;
    if(max(max(A,B),C) == A)
    {
        cout << "小猪A是最重的！他居然有" << A << "kg" << endl;
    }
    else if(max(max(A,B),C) == B)
    {
        cout << "小猪B是最重的！他居然有" << B << "kg" << endl;
    }
    else
    {
        cout << "小猪C是最重的！他居然有" << C << "kg" << endl;
    }
    system("pause");
    return 0;
}