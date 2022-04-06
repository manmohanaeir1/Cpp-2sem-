#include<iostream>
using namespace std;
class A{
    public:
     void show()
    {

        cout <<"This is class A" <<endl;
    }
};
class B: public A{
    public:
    void show()
    {
        cout<<"This is class B"<<endl;
    }
};
class C: public A{
    public:
    void show()
    {
        cout<<"This is class C"<<endl;
    }
};

int main()
{
    A *p, a;
    B b;
     C c;
     p = &b;
     p->show();
     p = &c; 
     p->show();
      p= &a;
      p->show();
      return 0;
}