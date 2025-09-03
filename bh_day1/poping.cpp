#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout << "plz input the length of array: ";
    cin >> n; 
    vector<int> num(n);
    cout << "plz input the value of the vector: ";
    for(auto i = 0u; i<num.size();i++)
        cin >> num[i];
    //poping partÖğ½¥µİÔö:
    for(auto i = 0u; i < num.size() - 1;i++)
        for(auto j = 0u; j < num.size() -i-1; j++)
        {
            if(num[j] > num[j+1])
            {
                auto temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    for(auto i =0u; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
}