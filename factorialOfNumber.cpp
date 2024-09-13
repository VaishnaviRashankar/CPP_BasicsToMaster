//Print the factorial of a given number 'n'
//Example 5! = 5*4*3*2*1
#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=i*f;
    }
    cout<<"Factorial of "<<" "<<n<<" "<<" "<<"is"<<" "<<f;
}
