#include<iostream>
#include<string>
#include<cmath>

class Point{
public:
    int x,y;
    void getx(int a){
        x = a; 
    }

    void gety(int b){
        y = b;
    }
};

class Circle{
    int r; //半径
    Point point;
public:
    void getroundinfo(int m, int x, int y){
        r = m;
        point.x = x;
        point.y = y;
    }
private:
    double Distance(Point point2){
        return sqrt(pow(point.x-point2.x,2) + pow(point.y-point2.y,2));
    }
public:
    void locationjudge(Point point){
        if(Distance(point) > r){
            std::cout << "点在圆外" << std::endl;
        }
        else if(Distance(point) == r){
            std::cout << "点在圆上" << std::endl;
        }
        else{
            std::cout << "点在圆内" << std::endl;
        }

    }


};


int main()
{
    Point point;
    point.getx(3);
    point.gety(4);
    Circle circle;
    circle.getroundinfo(1,3,3);
    circle.locationjudge(point);
    return 0;
}