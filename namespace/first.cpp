#include<iostream>
using namespace std;

namespace first_namespace{
    void fun(){
        cout <<"Inside first funciton/ first namespace" <<endl;
    }
}

namespace second_namespace{
    void fun(){
        cout <<"Inside second funciton/ second namespace" <<endl;
    }
}

int main(){
    first_namespace::fun();

    // for second 

     second_namespace::fun();
    return 0;
}