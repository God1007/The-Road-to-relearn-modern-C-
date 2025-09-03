#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<chrono>

using namespace std;

int main()
{   
    //案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，则提示数字过大或过小，反之则胜利并且退出游戏
    srand(time(0)); //随机数种子，保证了随机数的随机性
    int spike = rand() % 100 + 1;
    int guessnumber;
    int min = 1,max = 100;
    cout << "Game Start! Input a number you guess: ";
    cin >> guessnumber;
    cout << "Timing now..." << endl;
    auto start = chrono::high_resolution_clock::now();
    while(guessnumber != spike)
    {
        while(guessnumber > 100 || guessnumber < 1)
        {
            cout << "the number you input is incorrect, input one more plz..." << endl;
            cin >> guessnumber;
        }
        if(guessnumber > spike)
        {
            cout << "your number is too big! Try another one smaller." <<endl;
            if (max > guessnumber)
            {
                max = guessnumber - 1;
            }
            
            cout << "The current range is [" << min << ", " << max << "]" << endl;
            cin >> guessnumber;
        }
        else if(guessnumber < spike)
        {
            cout << "your number is too small! Try another one bigger." <<endl;
            if(min < guessnumber)
            {
                min = guessnumber + 1;
            }   
            cout << "The current range is [" << min << ", " << max << "]" << endl;
            cin >> guessnumber;
        }
    }
    cout << "Congratulations! You've guessed the number." << endl;
    // 结束计时
    auto end = chrono::high_resolution_clock::now();
    // 计算用了多少秒
    auto seconds = chrono::duration_cast<chrono::seconds>(end - start);
    // 显示结果
    cout << "you've spend: " << seconds.count() << " s to finish this game!" << endl;

    return 0;
}