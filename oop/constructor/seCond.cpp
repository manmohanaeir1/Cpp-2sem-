#include<iostream>
using namespace std;
class interest
{
    int principle,rate,year;
    float amount;
   public:
    interest(int p,int n,int r=10);
    void cal(void);
};
interest::interest(int p,int n,int r)

{
    principle=p;year=n;rate=r;
}
void interest::cal(void)
{
    cout<<"princiiple:"<<principle<<endl;
    cout<<"rate="<<rate<<endl;
    cout<<"year="<<year<<endl;
    amount= principle+(float)(principle*year*rate)/100;
    cout<<"Amount="<<amount<<endl;
}

int main()
{
    interest i(1000,2);
    interest I(1000,2,15);
    i.cal();
    I.cal();
    return 0;
}