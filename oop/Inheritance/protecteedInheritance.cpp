#include <iostream>
using namespace std;
class Animal
{
private:
    string color;

protected:
    string type;

public:
    void eat()
    {
        cout << "I can eat" << endl;
    }
    void sleep()
    {
        cout << "I can sleep" << endl;
    }
    string setColor(string clr)
    {
        color = clr;
    }
    string getColor()
    {
        return color;
    }
};
// detived class
class dog : public Animal
{
public:
    void setType(string typ)
    {
        type = typ;
    }
    void displayInfo(string c)
    {
        cout << "I am a type " << type << endl;
        cout << "my color is " << c << endl;
    }
    void bark()
    {
        cout << "Dog can bark!!" << endl;
    }
};
int main()
{
    dog d;
    // calling member of the base class
    d.eat();
    d.sleep();
    d.setColor(" Lime");

    // calling member of the derived class
    d.bark();
    d.setType(" mammal");
    d.displayInfo(d.getColor());
    return 0;
}
