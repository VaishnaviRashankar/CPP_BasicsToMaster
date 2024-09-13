// Calculate the sum of all the element in the given array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, a;
    int n = sizeof(arr)/4;
    int sum=1;
    for(int i=1;i<n;i++)
    sum*=arr[i];
    cout << "Sum OF Array :" <<  sum;
}