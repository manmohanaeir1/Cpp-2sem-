#include<iostream>
using namespace std;
class consts{
    public:
    consts(){
         cout<<"constructor called!!" <<endl;
    }
   
   ~consts(){
       cout<<"DIstructor called!!"<<endl;
   }
};
int main(){
    consts c1;
    int a= 1;
    if(a==1)
    {
        consts c2;
    }
    return 0;
}