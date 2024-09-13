// Find the maximum value out of all the element in the array

#include <iostream>
using namespace std;
int findMaximum(int arr[], int n)
{
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > maxi)
            maxi = arr[i];
        
    }
    return maxi;
}
int main()
{
    int arr[] = {1, 2, 32, 49, 5};
    int a = sizeof(arr) / 4;

    cout << "Sum OF Array :" << findMaximum(arr, a);
}