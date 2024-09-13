#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number  : ";
    cin>>a;
    if(a%15==0)
    {
        cout<<"Divisible by 5 and 3";
    }
    // if(a%5==0 and a%3==0)
    // {
    //     cout<<"Divisible by 5 and 3";
    // }
    else
    {
        cout<<"Not divisible by 5 and 3";
    }
}