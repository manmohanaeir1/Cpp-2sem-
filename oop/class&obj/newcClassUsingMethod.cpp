#include <iostream>
#include <conio.h>
using namespace std;
class print
{
public:
    string name;
    string address;
    string faculty;
    int roll;

    void printinfo()
    {
        cout << "Nmae: " << name ;
        cout << endl
             << "Address: "<< address;
        cout << endl
             << "Faculty: " << faculty;
    }
};
int main()
{
    print stud1; // object
    stud1.name = "Manmohan";
    stud1.address = "Bsntpur";
    stud1.faculty = "CSIT";
    stud1.printinfo();

    print stud2;
    stud2.name = "krishna";
    stud2.address = "Attariya";
    stud2.faculty = "CSIT";
    stud2.printinfo();

    return 0;
}