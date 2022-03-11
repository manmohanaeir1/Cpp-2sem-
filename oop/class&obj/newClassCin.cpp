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
    
    cout << "Enter name: ";
    cin>> intro.name;
    cout  <<endl << "Enter address: ";
    cin>> intro.address;
    cout  <<endl << "Enter faculty: ";
    cin >> intro.faculty; 

return 0;
}