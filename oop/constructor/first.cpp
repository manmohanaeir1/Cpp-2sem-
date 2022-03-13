#include<iostream>
using namespace std;
class item
{ 
    public:

int code ,price;
 
item() 
{
    code=price=0;
}
item(int c,int p)
{
    code=c;price=p;
}
item(item &x)
{
    code=x.code;
    price=x.price;
}
void display()
{
    cout<<"code:"<<code<<endl<<"price:"<<price<<endl;
}
};
int main()
{
item I;
item I1(100,300);
 item I2(I1);
I.display();
 I1.display();
  I2.display();
return 0;
}