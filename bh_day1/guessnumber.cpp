#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<chrono>

using namespace std;

int main()
{   
    //����������ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´�����ʾ���ֹ�����С����֮��ʤ�������˳���Ϸ
    srand(time(0)); //��������ӣ���֤��������������
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
    // ������ʱ
    auto end = chrono::high_resolution_clock::now();
    // �������˶�����
    auto seconds = chrono::duration_cast<chrono::seconds>(end - start);
    // ��ʾ���
    cout << "you've spend: " << seconds.count() << " s to finish this game!" << endl;

    return 0;
}