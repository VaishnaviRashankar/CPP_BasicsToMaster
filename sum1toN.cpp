//Sum 1 to N
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    cout<<sum;
}