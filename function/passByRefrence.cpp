#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp;
     tmp = a;
     a= b;
     b = tmp;
}
int main()
{
    int x =5, y = 6;
    swap(x, y);
    cout << "After swapping: "<< endl;
    cout <<"X = " <<x << endl <<"Y= "<<y;
    return 0;

}