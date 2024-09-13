//Take integer input and print the absolute value of that integer
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value :"<<" ";
    cin>>n;
    // if(n>0)
    // {
    //     cout<<n;
    // }
    // else 
    // {
    //     cout<<-n;
    // }
    // if you want you chnage n into its absolute value
    if (n<0)
    n=-n;
    cout<<n;
}