#include<iostream>
#include<conio.h>
using namespace std;

class info{
private: 

    int acc, phon, roll; 
    public:
 void setinfo(int account,int phone,int rollno )
    {
        acc=account;
        phon=phone;
        roll=rollno;
    }
    void sowinfo()
    {
        cout<<"your  account number is:"<<acc<<endl;
        cout<<"your phone number is:"<<phon<<endl;
        cout<<"your roll number is:"<<roll;
    }
};
int main()
{
    info obj,obj2;
    obj.setinfo(333,9834,7);
    obj.sowinfo();
    obj2.setinfo(444,55,34);
    obj2.sowinfo();
}
 