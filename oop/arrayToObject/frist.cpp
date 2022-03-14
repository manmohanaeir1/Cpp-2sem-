#include<iostream>
using namespace std;
class emp{
    int id;
    char name[40];
    public:
    void getData();
    void putData();
};

void emp::getData(){
    cout <<"Enter Id "<<endl;
    cin >>id;
    cout<<"Enter name  "<<endl;
    cin >>name;

}
void emp::putData(){
    cout << id << " ";
    cout << name <<" ";
    cout <<endl;
} 
int main(){
    emp e[20];
    int n, i;
    cout <<"Enter number of employees";
    cin >>n;
    for (i = 0; i <=n; i++)
    {
        e[i].getData();
        cout <<"EMployee data " <<endl;
        cout <<"ID" <<"Nmae " <<endl;
    }
    for (i = 0; i <=n; i++)
    {
        e[i]. putData();
    }
 return 0;   
    
}