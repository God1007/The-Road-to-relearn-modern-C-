#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// 水仙花数判定：一个三位数，每个位上的数字的3次幂之和等于它本身
int main()
{
    int input = 100;
    do
    {
        if (pow((input / 100),3) + pow(((input % 100) / 10),3) + pow(input % 10,3) == input)
            cout << input << "是一个水仙花数！" << endl;
        input++;
    }while(input < 999);
    return 0;
}