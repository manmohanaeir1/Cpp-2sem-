#include<iostream>
using namespace std;
class items{
    int code, price;
    public :
    void getData(){
        cout <<"Enter code and price" <<endl;
        cin>>code>>price;

    }
    void showData(){
        cout <<"Code " <<code <<endl;
        cout <<"Price "<<price <<endl; 
    }
};

int main(){
    items *a = new items();
    items b;
    a->getData();
    b.showData();
    cout<<"Items Address";
    cout <<"First iteams "<<endl;
    a->showData();
    cout<< "Second iteams" <<endl;
    b.showData();
    return 0;




}
