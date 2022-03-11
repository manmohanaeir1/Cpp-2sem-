#include<iostream>
#include<conio.h>
using namespace std;
int add(int i=0,int j=0);

int main()
{
    int i, j;

    if(i== 0 && j==0)
{
    cout<<"nothing to print;";
     }
     else if(i!=0 && j==0){
         cout<<"addition of i no. is:"<<add();
     }
     else {
         cout<<"Addition of two no. is:"<<addd(20,30);
     }
     
}
int add(int i){
return i+i;
}
int addd(int i,int j)
{
    return i+j;
}
    