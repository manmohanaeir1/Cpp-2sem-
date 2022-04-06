#include<iostream>
using namespace std;
class shape{
    protected:
    float p, l, b;
    public:
    void setData(int x, int y)
    {
        l= x;
        b= y;

    }

};

class square:public shape
{
    public:
    void find_peri()
    {
        p = 4*l;
        cout<<"Perimeter is:" <<p <<endl;

    }
};
int main()
{
    shape bo, *pt;
    square sq;
    pt = &sq;
    pt->setData(5,6);
    sq.find_peri();
    return 0;
    

    
}