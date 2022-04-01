#include<iostream>
using  namespace std;
class Animal{
    public :
    void eat(){
        cout<<"I can eat"<<endl;
    }
    void sleep()
    {
        cout <<"I can sleep"<<endl;
    }
};

class dog: public Animal 
{
    public :
    void bark()
    {
        cout <<"Dog can bark: " <<endl;
    }
};

int main(){
    dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();  //calling member of  the derived class
}