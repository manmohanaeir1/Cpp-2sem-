#include<iostream>
using namespace std;
class student{
    int roll;
    char name[40];
    public:
    void getData();
    void showinfo();
};

void student::getData()
 {
        cout<<"Enter  roll and name of the students";
        cin >>roll>>name;
    }
void student::showinfo()
    {
        cout<<"Roll = " <<roll <<"| Name = " <<name;
    }

class marks:public student
{
    int math,Ds, OOPs, MP,Stat;
    public:
    int totMarks = 0;
    float per;
    void getMarks();
    void showMarks();
    void totalMarks();
    void totalPerc();
    void grade();
};

void marks::getMarks()
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
void marks::showMarks()
{
        cout<<"Math = "<<math <<endl
            <<"Ds = "<<Ds <<endl
            <<"OOPs = "<<OOPs <<endl
            <<"MP = "<<MP <<endl
            <<"Stat = "<<Stat <<endl;
    }

void marks::totalMarks()
{   
    totMarks = math+Ds+OOPs+MP+Stat;
    cout<<"Total marks = " <<totMarks <<endl;
}

void marks::totalPerc(){
    
    int  totFM = 500;
    per = (totMarks/5);
    cout <<"Total perecnt = " <<per <<endl;

}

void marks::grade(){
    if (per>=90&&per<=100)
    {
       cout<<"Grade = A+";
    }
    else if(per>=80&&per<=90)
    {
        cout<<"Grade = A";
    }else{
        cout<<"Grade = F";
    }
    
}

int main(){
    marks m;
    m.getData();
    m.getMarks();
    m.showinfo();
    m.showMarks();
    m.totalMarks();
    m.totalPerc();
    m.grade();
    return 0;

}