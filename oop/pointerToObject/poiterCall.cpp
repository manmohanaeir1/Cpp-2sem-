#include<iostream>
using namespace std;
class pointer
{
int a,i;
public:
void mul();
};
void pointer::mul()
{
    cout<<"enter any number you want multiplication ";
    cin>>a;
    for(i=1;i<=10;i++)
    {
        //cout<<a" * " << i<<a*i<<endl;
        cout <<a <<" * " <<i << " = " <<a*i <<endl;
    }
}
int main()
{
    pointer *p;
    p=new pointer;
    p->mul();
}