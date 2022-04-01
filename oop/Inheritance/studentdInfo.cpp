#include<iostream>
using namespace std;
class student{
    int roll;
    char name[40];
    public:
    void getData()
    {
        cout<<"Enter  roll and name of the students";
        cin >>roll>>name;
    }

    void shoinfo(){
        cout<<"Roll = " <<roll <<"| Name = " <<name;
    }
};
class marks:public student{
    int math;
    int Ds;
    int OOPs;
    int MP;
    int Stat;
    public:
    void getMarks()
    {
        cout <<"Enter marks of math";
        cin>>math;
        cout <<"Enter marks of DS";
        cin>>Ds;
        cout <<"Enter marks of OOPs";
        cin>>OOPs;
        cout <<"Enter marks of MP";
        cin>>MP;
        cout <<"Enter marks of Stat";
        cin>>Stat;

    }
    void showMarks(){
        cout<<"Math = "<<math <<endl
            <<"Ds = "<<Ds <<endl
            <<"OOPs = "<<OOPs <<endl
            <<"MP = "<<MP <<endl
            <<"Stat = "<<Stat <<endl;
    }
};

int main(){
    marks m1;
    m1.getData();
    m1.getMarks();
    m1.shoinfo();
    m1.showMarks();
    return 0;

}