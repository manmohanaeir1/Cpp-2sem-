#include<iostream>
using namespace std;
class student{
    char cname[50];
    int roll;
    char name[40];
    public:
    void getData();
    void showinfo();
};

void student::getData()
 {      cout<<"Enter collage name: "<<endl;
        cin>>cname;
        cout<<"Enter  roll and name of the students =" <<endl;
        cin >>roll>>name;
    }
void student::showinfo()
    {
        for (int  i = 0; i <=100; i++)
        {
            cout<<"|";
            
        }cout<<endl;
        
        cout<<"Collage name = " <<cname <<endl
            <<"Roll = " <<roll  <<endl
            <<"Name = " <<name;
            cout<<endl;
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
        cout<<endl;

    }
void marks::showMarks()
{
    for (int  i = 0; i <=30; i++)
        {
            cout<<"-";
            
        }cout<<endl;

        cout<<"Math = "<<math <<endl
            <<"Ds = "<<Ds <<endl
            <<"OOPs = "<<OOPs <<endl
            <<"MP = "<<MP <<endl
            <<"Stat = "<<Stat <<endl;

     for (int  i = 0; i <=30; i++)
        {
            cout<<"-";
            
        }cout<<endl;
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
    }
    else if(per>=70&&per<=80)
    {
        cout<<"Grade = B+";
    }
    else if(per>=70&&per<=60)
    {
        cout<<"Grade = B";
    }
    else if(per>=60&&per<=50)
    {
        cout<<"Grade = C+";
    }
    else if(per>=50&&per<=40)
    {
        cout<<"Grade = C";
    }else if(per>=40&&per<=35)
    {
        cout<<"Grade = C";
    }
    cout<<endl;
    
    for (int  i = 0; i <=100; i++)
        {
            cout<<"|";
            
        }cout<<endl;
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