#include<iostream>
#include<string>

using namespace std;

int main()
{
    cout << "请输入你的高考成绩分数： ";
    int score;
    cin >> score;
    if(score > 600)
    {
        cout << "恭喜你考上一本！"<<endl;
    }
    else if(score > 500)
    {
        cout << "恭喜你考上二本！"<<endl;
    }
    else if(score > 400)
    {
        cout << "恭喜你考上三本！"<<endl;
    }
    else
    {
        cout << "未考上本科" << endl;
    }
    system("pause");
    return 0;
}