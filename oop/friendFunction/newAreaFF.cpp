#include<iostream>
#include<conio.h>
using namespace std;
class area
{
	int l,b;
	public:
	int getdata()
    {
	    cout<<"Enter the length and breadth"<<endl;
	    cin>>l>>b;
    }
    friend int a(area ari)
    {
    	return int(ari.l*ari.b);
	}
};
int main()
{
	area A;
	A.getdata();
	cout<<"The area is:"<<a(A);
	getch();
	return 0;
}