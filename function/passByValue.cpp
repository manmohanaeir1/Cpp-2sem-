#include<iostream>
using namespace std;
 void swap(int a, int b);

void swap(int a, int b){
    int temp ;
     temp = a;
    a= b;
    b= temp;
}

int main ()
{
    int x= 4, y = 6;
    swap(x,y);
    cout << "After swapping :: " <<endl;
    cout <<"X =" << x << endl <<"Y =" <<y << endl;
    return 0;
}