#include<iostream>
using namespace std;
class base{
    protected:
    int first;
    public:
    base(int a){
        first=a;
    }

};

class derived:public base{
    int second;
    public:
    derived(int a,int b):base(a){
        second=b;
    }
    void display(){
        cout<<"first value ="<<first<<endl;
        cout<<"second value ="<<second<<endl;


    }
};
int main(){
    derived d(10,20);
    d.display();
    return 0;
}