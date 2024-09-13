// Calculate the product of all the element in the given array
#include <iostream>
using namespace std;
int product(int arr[], int n)
{
    int add = 1;
    for (int i = 0; i <n; i++)
    {
         add*=arr[i];
    }
    return add;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int a=sizeof(arr)/4;

    cout << "Sum OF Array :" << product(arr, a);
}