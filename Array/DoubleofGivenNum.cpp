//Double of given number
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the N :"<<" ";
cin>>n;
cout<<"Enter the Element :"<<" ";
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Double of given number is :"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]*2<<endl;
}
}