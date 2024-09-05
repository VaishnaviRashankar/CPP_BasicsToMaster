//WAP to print odd numbers from 1 to 100 using Continue
#include<iostream>
using namespace std;
 int main()
 {
   int i;
   
   cout<<"Odd Number's: "; 
   for( i=1;i<100;i++)
   {
    if(i%2==0)
    continue;//This will skip the Even number conditon
    cout<<" "<<i; 
    

   }
   
 }