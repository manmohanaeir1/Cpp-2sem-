#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x, int y){
        return x+y;
}
int main(){
    int num;
    int n[100], add =0;
    cout<< "enter number ";
    cin >> num;
    if (num!=0)
    {
        for (int i = 1; i <=num; i++)
        {
            cout<< "enter operand:=";
            cin >> n[i];
        }
         for (int i = 1; i <=num; i++)
        {
           add =  sum(n[i],n[i]);
          
        }
        cout <<"sum"<< add;


        
    }
    
    return 0;


}