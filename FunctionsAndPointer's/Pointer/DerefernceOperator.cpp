#include <iostream>
using namespace std;
int main()
{
    int x=12;
    int *ptr=&x;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    *ptr=111;
    cout<<x;
}
    