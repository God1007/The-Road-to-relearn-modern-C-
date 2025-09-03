#include<iostream>
using namespace std;

int main(){
    int day = 1;
    switch(day){
        case 1:
        cout << "Today is Monday";
        break;
        case 2:
        cout << "Today is Tuesday";
        break;
        case 3:
        cout << "Today is Wednesday";
        break;  
        default:
        cout << "Looking forward to the Weekend";
        break;
    }
    return 0;

}
