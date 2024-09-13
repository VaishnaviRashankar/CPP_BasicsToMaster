// WAP to count digit of a given number
/*
Method :
1]Integer division
2]Divide n by 10 again & again

*/

#include<iostream>
using namespace std;
int main()
{
 int count =0;
 int n;
 cout<<"Enter the number : ";
 cin>>n;
 while(n>0)
 {
    n=n/10;//last digit remove
    count++;
    
 }   
 cout<<count;
} 


/*Basic Logic 
n= 1234    count=0
n=123      count=1
n=12        count=2
n=1         count=3
n=0        count=4*/