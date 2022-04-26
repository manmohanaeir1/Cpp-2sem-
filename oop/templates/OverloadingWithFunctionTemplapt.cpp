#include<iostream>
using namespace std;
template<class X>
void fun(X a){
    cout <<"value of a is:" <<a
    <<endl;
}

template<class X, class Y>

void fun(X b, Y c)
{
    cout<<"value of b is:" <<b <<endl;
    cout<<"value of c is :" <<c <<endl;

}

int main()
{
    fun(10);
    fun(30,40);
    return 0;
}