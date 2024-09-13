// Given an integer n. create an array containing squares of all natural numbers till n and print the element of the array.
#include <iostream>
using namespace std;
void square(int arr[], int n)
{
  
    for (int i = 1; i <= n; i++)
    {
        cout<< arr[i] * 2<<" ";
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
    cout << "Square of given number is :"<<" ";
    square(arr, size);
    // for (int i = 1; i <= size; i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
}