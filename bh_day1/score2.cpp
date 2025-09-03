#include<iostream>
#include<array>
#include<numeric>

using namespace std;

int main()
{
    array<array<int, 3>, 3> score = {100,100,100,90,50,100,60,70,80};
    array<string,3> name ={"张三","李四","王五"};
    int sum = 0;
    for(auto i = 0u; i < score.size(); i++)
    {
        for(auto j =0u;j < score[i].size();j++)
        {
            sum += score[i][j];
        }
        cout << name[i] << "的总成绩为：" << sum << endl;
        sum = 0;
    }
        
    return 0;
}