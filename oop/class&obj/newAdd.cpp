#include<iostream>
using namespace std;

class add{
    public:
    int x,y,sum;
    int getInfo();
    int getResult();
};

int add::getInfo(){
    cout<< "Enter firsr number: "<<endl;
    cin >> x;
    cout<<"Enter second number :" <<endl;
    cin >> y;

}
int add::getResult(){
    return x+y;
}
int main()
{
    add A;
    int sum;
    A.getInfo();
    //A.getResult(a,b);
    sum = A.getResult();
    cout <<"Sum is " <<sum;
    return 0;
}
