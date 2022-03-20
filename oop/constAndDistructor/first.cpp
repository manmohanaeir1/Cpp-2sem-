#include<iostream>
#include<conio.h>
using namespace std;
class example{
    int a;
    public:
    example(){
        a= 0;
        cout<<"inside constructor" <<endl;


    }
    ~example(){
        cout<<"X = "<<a <<endl;
        cout <<"inside distructor";
    }


};

int main(){
    example ex;
    cout <<"Hello";
    getch();
    return 0;
}