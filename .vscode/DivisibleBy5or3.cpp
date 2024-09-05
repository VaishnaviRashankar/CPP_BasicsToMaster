#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number  : ";
    cin>>a;
    
    if(a%5==0 or a%3==0)//or is true when one condition is true
    {
        cout<<"Divisible by 5 and 3";
    }
    else
    {
        cout<<"Not divisible by 5 and 3";
    }
}