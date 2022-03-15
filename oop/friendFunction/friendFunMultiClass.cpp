#include <iostream>
using namespace std;
class BIT;
class CSIT
{
    int girl, boy;

public:
    void getData()
    {
        cout << "Enter number of boys and girls of CSIT class ";
        cin >> girl >> boy;
    }
    friend int gTotal(CSIT, BIT);
    friend int bTotal(CSIT, BIT);
};

class BIT
{
    int girl, boy;

public:
    void getData()
    {
        cout << "Enter number of boys and girls of BIT class ";
        cin >> girl >> boy;
    }
    friend int gTotal(CSIT, BIT);
    friend int bTotal(CSIT, BIT);
};

int gTotal(CSIT x, BIT y)
{
    return (x.girl + y.girl);
}
int bTotal(CSIT x, BIT y)
{
    return (x.boy + y.boy);
}

int main()
{
    CSIT c;
    BIT b;
    c.getData();
    b.getData();
    cout << "Total numuber of girls "
         <<gTotal(c,b) <<endl ;
    cout << "Total numuber of girls "
         <<bTotal(c,b) ;
         return 0;
}