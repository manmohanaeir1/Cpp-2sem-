#include<iostream>
using namespace std;
template <class T>
T Mymax(T x, T y)
{
    return (x>y)?x:y;

}
int main()
{
    cout<< Mymax<int> (31,5)<<endl;
    cout<< Mymax<char> ('a', 'b');
    return 0;
}
