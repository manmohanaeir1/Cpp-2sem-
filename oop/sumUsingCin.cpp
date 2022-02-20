#include <iostream>
#include <conio.h>
using namespace std;
class sum
{
    int num1, num2;

public:
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void showdata();
    int findadd();
};

void sum::showdata()
{   
    cout <<"num1 = " <<num1 <<endl << "num2 = " <<num2 <<endl;
}
int sum::findadd()
{
    return num1 + num2;
}
int main()
{
    int a,b;
    int sum1;
    sum s;
    cout<<"Enter first number:";
    cin >>a;
    cout<< "Enter second number";
    cin >> b;
    s.setdata(a, b);
    s.showdata();
    sum1 = s.findadd();
    cout << "sum is :" << sum1 << endl;

    return 0;
}