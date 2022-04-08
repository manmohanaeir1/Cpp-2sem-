#include<iostream>
using namespace std;
class shape{
    protected: 
    int wdth, hgth;

    public: 
    shape(int a = 0, int b= 0){
        wdth = a;
        hgth = b;

    }
    int area(){
        cout<<"Parent class area:"<<endl;

    }
};

class rect: public shape{
    public:
    rect(int a= 0, int b= 0):shape(a,b){}
    int area()
    {
        cout<<"Rectangle class area:"<<endl;
        return (wdth*hgth);

    }
};
class Triangle:public shape{
    public:
    Triangle(int a= 0, int b= 0):shape(a,b)
    {

    }
    int area(){
        cout<<"Triangle class area: "<<endl;
        return(wdth*hgth)/2;
    }
};

int main()
{
    shape *sp;
    rect re(10,7);
    Triangle tri(10,5);

    // store address of rect;
    sp = &re;

    //call rectangle area;
    sp->area();

    //store address of triangle ;
    sp= &tri;

    //call triangle area;
    sp->area();

    return 0;


}