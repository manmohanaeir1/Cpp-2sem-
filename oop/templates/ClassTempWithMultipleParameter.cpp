#include<iostream>
using namespace std;
template <class T1, class T2>

class  A{
T1 a;
T2 b;
public:
A(T1 x, T2 y)
{
    a=x;
    b=y;
}
void display()
{
    cout <<"values of a "<<a  <<" values of b: " << b <<endl;
}
};

int main()
{
     A<int ,float> d(4, 6.7);
     d.display();
     return 0;
}






