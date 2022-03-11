#include <iostream>
#include<conio.h>
using namespace std;

class msg{
    public:
    string name;
    void getinfo();
    void printinfo();
};

void msg::getinfo(){
    cout << " name: " <<name <<endl;
}

void msg::printinfo(){
    cout <<"enter name: ";
    cin>> name;
}

int main(){
    msg m;
    m.printinfo();
     m.getinfo();
    return 0;
}


