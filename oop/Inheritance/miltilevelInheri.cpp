#include<iostream>
using namespace std;
class collage{
    char CN[20], add[20];
    public:
    void getData(){
        cout <<"ENter name of the collage: ";
        cin >> CN; 
        cout<<"ENter address of the collage: ";
        cin>> add;
    }
    void display(){
        cout<<"the collage name is : "
        <<CN <<endl;
        cout<<"The collage address is: "
        <<add <<endl;
    }
};

class ecuri:public collage{
    int fee;
    char game[20];
    public:
    void getData1(){
        cout<< "Enter fee :";
        cin >>fee;
        cout <<"Enter name of the game :";
        cin >> fee;

    }
    void display1(){
        cout<<"Fee is : " 
        <<fee <<endl;
        cout<<"game is : "
        <<game<<endl;

    }
};

class students:public ecuri{
    int roll;
    char SN[20];
    public:
    void getData2()
    {
        getData();
        getData1();
        cout<<"Enter the name of the students: "<<endl;
        cin>>SN;
        cout<<"Enter the roll of the students: "<<endl;
        cin>>roll;
    }
    void display2(){
        display();
        display1();
        cout<<"THe name of the students is :"
        <<SN<<endl;
        cout<<"THe roll of the students is: "
        <<roll<<endl;

    }
};
int main()
{
    students s;
    s.getData2();
    s.display2();
    return 0;
}