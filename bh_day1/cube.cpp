#include<iostream>
#include<string>

class Cube{
    int m_L, m_H, m_W;
    int m_volum = 0, m_area = 0;
    
public:
    int get_L(){
        return m_L;
    }
      
    int get_W(){
        return m_W;
    }

    int get_H(){
        return m_H;
    }

    void inputLHW(int l, int h, int w){
        m_L = l;
        m_H = h;
        m_W = w;
    }

    int cauculatearea(){
        m_area = 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
        std::cout << "The area of cube is: " << m_area << std::endl;
        return m_area;
    }

    int cauculatevolum(){
        m_volum = m_H * m_L * m_W;
        std::cout << "The volum of cube is: " << m_volum << std::endl;
        return m_volum;
    }
private:
    bool compareare(int a,int b){
        if(a==b)
            return 1;
        else
            return 0;
    }

    bool comparevolum(int a,int b){
        if(a==b)
            return 1;
        else
            return 0;
    }

public:
    void ifequal(Cube c2){
        if(compareare(cauculatearea(),c2.cauculatearea()) && comparevolum(cauculatevolum(),c2.cauculatevolum())&& m_H == c2.m_H && m_W == c2.m_W && m_L == c2.m_L)
            std:: cout << "The cubes are same!" << std::endl;
        else
            std::cout<<"Not the same!"<< std::endl;
    }
};

void compare(Cube a, Cube b){
    if(a.cauculatearea() == b.cauculatearea() && a.cauculatevolum() == b.cauculatevolum() && a.get_H() == b.get_H() && a.get_W() == b.get_W() && a.get_L() == b.get_L())
        std::cout << "Same!" << std::endl;
    else   
        std::cout << "Not the Same!" << std::endl;
}

int main(){
    Cube cube1,cube2;
    cube1.inputLHW(1,2,3);
    cube2.inputLHW(1,2,3);
    cube1.ifequal(cube2);
    compare(cube1,cube2);
    return 0;
}