// Count the number of element in given array greater tha a given number x.

#include <iostream>
using namespace std;
void square(int arr[], int n)
{
  
  int k,count=0;
  cout<<"Enter Number:"<<endl;
  cin>>k;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]>k)
        {
            count++;
            cout<<arr[i]<<" ";
        }
       
    }
     cout<<"Count of Greater number is :"<<count<<endl;
}
int main()
{
    int size;
    cout<<"Enter n : ";
    cin>>size;
    int arr[size+1];
      
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
    }
    
 
    square(arr, size);
    
    
}