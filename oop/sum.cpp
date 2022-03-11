#include<iostream>
using namespace std;
class sum{
    int num1, num2;
    public:
    int setData(int a, int b)
    {
        num1 = a;
        num2 = b;
       
    }

    int getData()
    {
        return num1 +num2;
    }

};

int main()
{
    sum s;
    s.setData(3,4);
    cout << s.getData();
    return 0;

}