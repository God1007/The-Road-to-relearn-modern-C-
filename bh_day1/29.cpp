#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    //continue语句：在循环语句中跳过本次循环未执行的语句，进行下一次循环
    //break会退出循环，但是continue不会，只是进行下一步循环
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if(j % 2 == 0)
                continue;
            cout << " * "; 
        }
        cout << endl;
    }
    return 0;
}