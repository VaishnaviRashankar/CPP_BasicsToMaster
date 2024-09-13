// Calculate the sum of all the element in the given array
#include <iostream>
using namespace std;
int sum(int arr[], int add)
{
    add = 0;
    for (int i = 0; i <= 5; i++)
    {
        add = add + arr[i];
    }
    return add;
}
int main()
{
    int arr[5] = {1, 42, 313, 4, 5}, a;
  
    cout << "Sum OF Array :" <<  sum(arr, a);
}