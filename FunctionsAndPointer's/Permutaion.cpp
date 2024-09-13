//WAP for Permutation
/*
Formula
nPr = n!/(n-r)!
a=n;
b=(n-r);
*/
#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,r;
    cout<<"Enter  n : ";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    cout<<a/b;
  return 0;
}
