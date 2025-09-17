#include<iostream>
using namespace std;

#define pi 3.14

int main()
{
    const int a = 10;
    cout << "a=" << a << endl;
    cout << "pi=" << pi << endl;
    float r = 3.0;
    float area = 0.0;
    area = pi * r * r;
    cout << "area=" << area << endl;

    system("pause");
    return 0;


}