#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
    int sum(int a,int b)
    {
        return a+b;
    }
    void display()
    {
        cout<<"enter two numbers:"<<endl;
        cin>>a>>b;
        cout<<"sum of two number is "<<sum(a,b);
    }
};
int main()
{
    int a,b;
    add g;
    g.display();
    g.sum(a,b);
    return 0;
}