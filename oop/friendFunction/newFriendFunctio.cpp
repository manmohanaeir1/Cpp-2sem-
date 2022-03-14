#include<iostream>
using namespace std;

class sum{
    int a,b,c;
    public:
    int getData();
    int add();
    friend int add(sum s);
};

int sum::getData(){
    cout <<"Enter vanues of a ,b, c: " <<endl;
    cin>>a>>b>>c;
}
int add(sum s){
   return (s.a+s.b+s.c);
}

int main(){
    sum s;
    s.getData();
     cout <<"The sum is :" <<add(s);
    return 0;
}