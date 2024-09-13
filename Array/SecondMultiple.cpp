// Given an array of integer, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10

#include <iostream>
using namespace std;
void multiple
(int arr[], int n)
{
  
    for (int i = 1; i <= n; i++)
    {
       if(arr[i]%2!=0)
       {
        cout<<arr[i]*2<<" ";
       }
       else if(arr[i]%2==0)
       {
        cout<<arr[i]*10<<" ";
       }
    }
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
    cout << "multiple of given number is :"<<" ";
    multiple
    (arr, size);
    
}