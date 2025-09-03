#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //This is multiply table output.
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << i << " x " << j << " = " << i*j << " ";
        cout << endl;
    }
}