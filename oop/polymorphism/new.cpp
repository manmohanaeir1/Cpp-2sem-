#include<iostream>
using namespace std;
class A
{
    public:
        void fun()
        {
            cout<<"A::fun()"<<endl;
        }
};
class B:public A
{
    public:
        void fun()
        {
            cout<<"B::fun()"<<endl;
        }
};
int main()
{
    A *a=new A;
    B *b=new B;
    a->fun();
    b->fun();
    return 0;
}
// Output:
