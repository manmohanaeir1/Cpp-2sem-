#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    if (n>0)
    {
       cout << "entered number is positive";

    }
    else if(n<0)
    {
        cout << "entered number is negative";
    }
    else
    cout << "entered number is zero";
    return 0;
    
}