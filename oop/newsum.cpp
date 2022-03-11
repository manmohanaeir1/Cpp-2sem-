#include <iostream>
#include<conio.h>
using namespace std;

class msg{
    public:
   int a,b,c;
    void getinfo();
    int printinfo();
};

void msg::getinfo(){
        a=4;
        b=5;
        cout << "sum= " <<c;
}

int msg::printinfo(){
     c = a+b;
}

int main(){
    msg m;
    m.printinfo();
     m.getinfo();
    return 0;
}


