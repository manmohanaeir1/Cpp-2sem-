#include<iostream>
#include<conio.h>
const int size=100;
using namespace std;
class employee
{
    int sallery;
    char name[20];
    public:
   void getdata()
   {
       cout<<"Enter your name and sallery:";
       cin>>name>> sallery;
   }
   void showdata()
   {
       cout<<name<<"earn "<<sallery<<"per month";
   }

};
int main()
{
employee emp[size];
int n=0;
char ans;
do
{
   cout<<"Enter the employee number"<<n+1<<endl;
   emp[n++].getdata();
   cout<<"Enter another number (y for yes and n for no";
   cin>>ans;
}while(ans!='n');
   cout<<endl<<"*******employees details******";
   for(int j=0; j<n; j++)
   {
       cout<<"\nEmployee Number is::"<<j+1;
       emp[j].showdata();
   }
   getch();
   return 0;
}