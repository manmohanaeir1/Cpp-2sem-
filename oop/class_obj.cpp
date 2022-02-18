#include<iostream>
using namespace std;
    class info{
        private:
        int acc, ph, roll;
        public:
        void setinfo(int a , int p, int r){
            acc = a;
            ph = p;
            roll = r;
        
        }
        void showinfo()
        {
          
            cout << "\n" << "Account number is  " << acc ;
             cout << "\n" << "phone number is  " << ph ;
              cout << "\n" << "roll number is  " << roll ;
        }
        void getinfo();
    };

    void info::getinfo()
    {
        cout << "\n" <<"Enter account number, phone number, roll number";
        cin >> acc >>ph >>roll;

    }

    int main()
    {
        info i ,j;
        i.setinfo(4003, 4950698, 3);
        i.showinfo();
        j.getinfo();
        j.showinfo();
        return 0;
    }
