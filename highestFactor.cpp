// Write a program to find the highest factor of a number 'n' (other than n itself)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i = n/2 ; i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<"Highest Common Factor : "<<i<<endl;
            break;//if condition Statisfy than it will stop
        }
        
    }

    
}