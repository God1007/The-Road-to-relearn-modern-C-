#include<iostream>
#include<vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    vector<int> num(5);
    for(size_t i = 0; i < num.size(); i++)
        cin >> num[i];
    
    // Ã°ÅÝÅÅÐò
    int *x = num.data();
    for(size_t i = 0; i < num.size() - 1; i++)
    {
        for(size_t j = 0; j < num.size() - i - 1; j++)
        {
            if(*(x + j) > *(x + j + 1))
            {
                swap(x + j, x + j + 1);
            }
        }
    }
    
    // Êä³ö½á¹û
    int *z = num.data();
    for(size_t n = 0; n < num.size(); n++)
    {
        cout << *z << endl;
        z++;
    }    
    return 0;
}