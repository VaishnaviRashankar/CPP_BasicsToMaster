// Write a program to find the highest factor of a number 'n' (other than n itself)
#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            f=i;
        }
        
    }
    cout<<"Highest Common Factor : "<<f<<endl;
    
}