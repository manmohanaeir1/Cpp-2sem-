#include<iostream>
using namespace std;
class add
{
    float a,b;
    char nme[10],address[10];
    public:
    void name();
    void showdata();     
    friend float sum(add);
    float givedata(float x,float y);         //will try to give argument 
};
void add::name()
{
    cout<<"enter your name and address :"<<endl;
    cin>>nme>>address;
    cout<<"enter value of two numbers ";
    cin>>a>>b;

}
void add::showdata()
{
cout<<"your name is "<<nme<<endl;
cout<<"your address is "<<address<<endl;
}
float add::givedata(float x,float y)
{
         return x+y;
         
}
float sum(add c)
{
    return c.a+c.b;
}
int main()
{
    add d;
    d.name();
    d.showdata();
    cout<<"addition of two number is "<<d.givedata(3.8,9.8) <<"and\t"<<sum(d);
    return 0;
}