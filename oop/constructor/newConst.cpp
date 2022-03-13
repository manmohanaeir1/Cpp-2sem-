#include<iostream>
using namespace std;

class consts{
    public:
    int roll;
    int  age;

//default constructor
    consts(){
        roll = 0;
        age = 0;

    }
    void display(){
        cout <<"Roll = " <<roll <<endl
        <<"Age = " <<age<<endl<<endl;
    }

//parameter constructor
    consts(int r, int a){
        roll = r;
        age = a;
    }

//copy constructor
    consts(consts &x){
        roll = x.roll;
        age = x.age;
    }


};

int main(){
    consts c1, c2(3,5), c3(c2);
    c1.display();
    c2.display();
    c3.display();

    return 0;
}