#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    void operator++()
    {
        ++a;
       ++b;
    }
    void display()
    {
        cout << "Value of a  = " << a << "And B=" << b;
    }
};

int main()
{
    test t1(3, 6);
    ++t1;
    t1.display();
    return 0;
}