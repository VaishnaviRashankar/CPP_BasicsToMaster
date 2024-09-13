// find the Second largest element inthe given array
//  Find the diffenece between the sum of elements at even indices to the sum of element at odd indices.

#include <iostream>
using namespace std;
void square(int arr[], int n)
{

    int mx=INT_MIN;
    
    for (int i = 1; i < n; i++)
    {
        mx=max(mx,arr[i]);
       
    }
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]!=mx)
       smax=max(smax,arr[i]);
       
    }
    cout<<"Second Max"<<" "<<smax;
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