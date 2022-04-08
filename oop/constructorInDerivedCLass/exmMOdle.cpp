#include<iostream>
using namespace std;
class shape{
    int s1, s2;
    public:
    shape(int x, int y){
        s1=x;
        s2=y;
    }
    void display()
    {
        cout<<"the information of shape is:"<<endl;

    }
};
class triangle :public shape{
    int b, h, art;
    public:
    triangle(int x, int y, int b, int c):shape(x,y){
        b=b;
        h=c;
       
    }
    void show1(){
        cout<<"This is triangle "<<endl;;
        cout<<"Base = "<<b <<endl;
        cout<<"Height = "<<h <<endl;
    }
    void triangle::area(){
        art=0.5*b*h;
        cout<<"Area of triangle = "<<art<<endl;
    }
};
class rect:public shape{
    int lr, br, arr;
    public:
    rect(int x, int y, int l, int r):shape(x,y){
        lr=l;
        br=r;
    }
    void show2(){
    cout<<"This is rectangle"<<endl;
    cout<<"Length = "<<lr <<endl;
    cout<<"Breadth = "<<br <<endl;
}

void rect::area(){
    arr=lr*br;
    cout<<"Area of rectangle = "<<arr<<endl;
}
};

int main(){
    int p, q, r, s;
    cout<<"Enter the base, height and length and breadth of triangle and rectangle respectively"<<endl;
    cin>>p>>q>>r>>s;
    triangle t(p,q,r,s);
    t.display();
    t.show1();
    t.area();

    rect re(p,q,r,s);
    re.display();
    re.show2();
    re.area();
    return 0;


}

