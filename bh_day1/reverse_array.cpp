#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int, 5> num;
    for(auto i = 0u; i < num.size(); i++)
    {
        cin >> num[i];
    }
    for(auto j = 0u; j < num.size()/2; j++)
    {
        int temp = 0;
        temp = num[j];
        num[j] = num[num.size() - j - 1];
        num[num.size() - j - 1] = temp; 
    }
        for(auto i = 0u; i < num.size(); i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}