#include<iostream>
#include<array>
using namespace std;

int main()
{   
    int maxweight = 0;
    array <int,5> weight = {300,350,200,400,250};
    for(auto i = 0u; i < weight.size(); i++){ //.size()函数返回的是一个无符号整数，所以int可以设置为auto，也变成无符号整数，避免一些潜在bug
        if(weight[i] >= maxweight)
            maxweight = weight[i];
    }
    cout << "最重的小猪是： " << maxweight <<endl;
    return 0;
}