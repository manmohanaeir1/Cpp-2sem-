#include<iostream>
using namespace std;
class volume{
    int l,b,h;
    int volm;
    public:
    volume(int a, int c, int d);
    void result();
    };

    volume::volume(int a, int c, int d)
    {
        l=a;
        b=c;
        h=d;

    }
    void volume::result(){
        cout<<"The length , bredth and hight are  " <<l<<" "<<b<<"  "<<h <<endl;
        volm=l*b*h;
        cout<<"thre volm is:" <<volm;
    }
    int main(){
        int l, b, h;
        cout<<"Enter the length , bredth and height";
        cin >>l>>b>>h;
        volume v(l,b,h);
        v.result();
        return 0;
    }