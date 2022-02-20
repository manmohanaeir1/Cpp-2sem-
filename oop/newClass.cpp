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
};
int main()
{
    print intro;// object

    intro.name = "manmohan";
    cout << intro.name <<endl;
    intro. address = "Bsntpur";
    cout << intro.address <<endl;
    intro.faculty = "CSIT";
    cout<<intro.faculty <<endl;
return 0;
}