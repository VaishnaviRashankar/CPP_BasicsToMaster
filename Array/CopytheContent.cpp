// Write a program to copy the contents of one array into another in the reverse order
//Ulte order main pura aaray copy paste

#include <iostream>
using namespace std;
void square(int arr[], int n)
{
    int b[n];
   for (int i =0; i <n; i++)
        {
            int j=n-1-i;
            b[i]=arr[j];
        }
    
    for (int i = 0; i <n; i++)
    {
       
      cout<<b[i]<<" "; 
    }
    
    }
    
    int main()
    {
        int size;
        cout << "Enter n : ";
        cin >> size;
        int arr[size + 1];

        for (int i =0; i < size; i++)
        {
            cin >> arr[i];
        }

        square(arr, size);
    }