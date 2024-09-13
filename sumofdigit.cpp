// WAP to print sum of digit of a given number
/*
Method
1]Modules Operator
2]n%10 gives the last digit
3]1+2+3 = 3+2+1*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter number : "<<" ";
    cin>>n;
    while(n>0)
    {
        int last_digit=n%10;//gives the last digit
        n=n/10;
        sum = sum+n;
        
        
        
    }
    cout<<sum;
    
}