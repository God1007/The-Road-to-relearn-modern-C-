#include<iostream>
#include<array>
using namespace std;

int main()
{   
    int maxweight = 0;
    array <int,5> weight = {300,350,200,400,250};
    for(auto i = 0u; i < weight.size(); i++){ //.size()�������ص���һ���޷�������������int��������Ϊauto��Ҳ����޷�������������һЩǱ��bug
        if(weight[i] >= maxweight)
            maxweight = weight[i];
    }
    cout << "���ص�С���ǣ� " << maxweight <<endl;
    return 0;
}