#include<iostream>
using namespace std;

class room{
    private:
    double length;
    double bredth;
    double height;

    public:
    void initData(double l, double b, double h){
        length = l;
        bredth = b;
        height = h;
    }

    double calcArea();
    double calcVolm();
};

    double room:: calcArea(){
        return length * bredth;
    }

    double room ::calcVolm(){
        return length * bredth * length;
    }


int main(){
   
    room r1;
    r1.initData(3.3,4.6, 5.4);
    cout<< "area = " << r1.calcArea() <<endl;
    cout<< "volume = " << r1.calcVolm();
     return 0;
}