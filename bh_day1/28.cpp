#include<iostream>
using namespace std;

int main()
{
    //跳转语句：用于跳出选择结构或者循环结构
    //可跳出：switch、当前循环语句、最近的内层循环语句
    for( int i = 0 ; i < 5; i++)
    {
        for(int j = 0;j < 5; j++)
        {
            cout << " * ";
            if(j == 1)
                break;
        }
        cout << endl;
    }
}