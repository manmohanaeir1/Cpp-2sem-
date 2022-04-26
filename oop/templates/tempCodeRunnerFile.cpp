#include<iostream>
using namespace std;
template <class T>
class A{
    public:
    T n1 = 6;
     T n2 = 7;
void getNum()
{
    cout<< "Addition of two number is :" <<n1+n2 <<endl;
   
   
}
};

int mian()
{
    A<int> d;
    d.getNum();
    return 0;
}




