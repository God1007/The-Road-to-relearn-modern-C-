#include<iostream>
#include<string>
using namespace std;

int main()
{
    //switch���
    //switchȱ�㣺ֻ���ж����ͣ�char���ͣ�ö�����ͣ������жϸ�����
    //switch�ŵ㣺����ʹ��case��䣬����ɶ��Ըߣ�ִ��Ч�ʸ�
    //switch���жϱ��ʽ�𣿣�����
    int a;
    cout << "input a plz: ";
    cin >> a;
    switch(a)
    {
        case 4:
            cout << "a is 4" << endl;
            break; //�˳���ǰ��֧����Ȼ��һֱ������
        case 3:
            cout << "a is 3" << endl;
            break;
        case 2:
            cout << "a is 2" << endl;
            break;
        default:
            cout << "a is not 1, 2 or 3" << endl;
            break;
    }

    switch(a > 4)
    {
        case 1:
            cout << "a is greater than 4" << endl;
            break;
        case 0:
            cout << "a is not greater than 4" << endl;
            break;
    }
    return 0;
}