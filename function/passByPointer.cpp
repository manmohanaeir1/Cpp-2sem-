#include<iostream>
using namespace std;

void exchange(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int *pt , *pt1;
    int a = 2, b = 4;
    pt = &a;
    pt1 = &b;
    cout <<pt  <<endl  <<pt1 <<endl;

    cout<< "X = " <<a <<endl  <<"Y = "<<b <<endl;
    exchange(&a , &b) ;
   
    cout << "After exchanging";
     cout <<endl;
    cout << "X = "<< a <<endl <<"Y= "<< b;
    return 0;


    
}