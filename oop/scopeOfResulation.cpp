#include<iostream>
#include<conio.h>
using namespace std;
class intro{
    public:
    int roll;
    string name;

    void myintro();

};

void intro::myintro(){
    cout << "hello manmohan";
}

int main()
{
    intro myobj;
    myobj. myintro();
    return 0;
}

