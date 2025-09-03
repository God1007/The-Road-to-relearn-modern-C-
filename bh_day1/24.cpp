#include<iostream>
#include<string>

using namespace std;

int main()
{
    //while循环: 避免死循环的出现
    int i = 1;
    while(i < 10)
    {
        cout << i++ << endl;
    }
    return 0;
}