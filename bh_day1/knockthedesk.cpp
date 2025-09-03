#include<iostream>
#include<string>

using namespace std;

int main()
{
   //从1开始到数字100，如果数字个位或者十位含有7，或者是7的倍数，打印敲桌子，其余数字直接打印输出
   for(int i = 1; i<=100; i++)
   {
        if(i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
            cout << "Knock the desk." << endl;
        else
            cout << i << endl;
   } 
   system("pause");
   return 0;
}