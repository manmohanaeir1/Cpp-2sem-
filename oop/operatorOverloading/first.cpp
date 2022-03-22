#include<iostream>
using namespace std;
class simple{
    int x,y,z;
    public:
    void setData(int a, int b, int c);
    void dispaly();
    void operator -();

};
void simple::setData(int a, int b, int c){
    x=a;
    y=b;
    z=c;

}
void simple::dispaly()
{
    cout<<x<<" " <<endl;
    cout<<y<<" "<<endl;
    cout<<z<<" "<<endl;

}
void simple::operator-(){
    x=-x;
    y=-y;
    z=-z;

}
int main(){
    simple s;
    s.setData(2,-33,4);
    s.dispaly();
    -s;
    s.dispaly();
    return 0;
}