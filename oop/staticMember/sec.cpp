#include<iostream>
using namespace std;
class emp{
     int id;
     static  int count;
      public:
      void setData(void){
          cout <<"Enter  the id" <<endl;
          cin >>id;
          count++;
      }
      void getData(void){
          cout <<"The id of this employee is : "<<id<< "this is employee number " <<count<<endl;
      }

};
int emp::count;
int main(){
    emp  manmohan, harish, shyam;
    manmohan.setData();
    manmohan.getData();

    harish.setData();
    harish.getData();

    shyam.setData();
    shyam.getData();
    return 0;
}