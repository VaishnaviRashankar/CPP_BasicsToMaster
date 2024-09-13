//Change the  number
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
arr[2]=1000;
cout<<"New Array :"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
}