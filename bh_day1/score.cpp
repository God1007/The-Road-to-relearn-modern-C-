#include<iostream>
#include<array>
#include<numeric>

using namespace std;

int main()
{
        array<array<int, 3>, 3> score = {100,100,100,90,50,100,60,70,80};
    cout << "同学们的总成绩如下： " << endl;
    int sum = 0;
    for(auto i = 0u; i < score[0].size(); i++)
        sum += score[0][i];
    cout << "张三: " << sum << endl;
    sum = 0;
    for(auto i = 0u; i < score[1].size(); i++)
        sum += score[1][i];
    cout << "李四：" << sum <<endl;
    sum=0;
    for(auto i = 0u; i < score[2].size(); i++)
        sum += score[2][i];
    cout << "王五："<<sum<<endl;
    return 0;
}