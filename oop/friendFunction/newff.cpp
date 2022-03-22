#include<iostream>
#include<conio.h>
using namespace std;
class Aveg
   {
	int a,b;
	public:
	void getinfo()
    	{
		cout<<"Enter the numbers"<<endl;
		cin>>a>>b;
	    }
	friend int sum(Aveg a)
    	{
		return int((a.a+a.b)/2);
	    }
	
  };
int main()
{
	Aveg Av;
	Av.getinfo();
	cout<<"The Average is:"<<sum(Av);
	getch();
	return 0;
}