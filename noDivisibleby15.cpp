// Take positive integer input and tell if if is divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    if((a%5==0 or a%3==0) and (a%15!=0))
    {
        cout<<"Number is Divided by 3 and 5";
    }
    else{
        cout<<"Number is Divided by 3 and 5 but not by 15";
    }
   
}