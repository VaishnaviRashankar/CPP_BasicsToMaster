//Print the factorial of first 'n' numbers
//Example 5! = 5*4*3*2*1
#include<iostream>
using namespace std;
int main()
{
    int n,f=1,i;
    cout<<"Enter the number : ";
    cin>>n;
    for( i=1;i<=n;i++)
    {
        f=i*f;
        cout<<"Factorial of "<<" "<<i<<" "<<" "<<"is"<<" "<<f<<endl;
    }
    
}
