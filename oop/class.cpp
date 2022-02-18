#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    void printinfo(){
        cout << "Name :" ;
        cout << name <<endl;
        cout << "age :";
        cout <<age <<endl;
        cout << "Gender :";
        cout <<gender <<endl;

    }

};

int main()
{
    student a;
    a.name = "manmohan";
    a.age = 20;
    a.gender = "M";

      a.printinfo();
    return 0;
}