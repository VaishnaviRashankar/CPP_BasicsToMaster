// Find the diffenece between the sum of elements at even indices to the sum of element at odd indices.

#include <iostream>
using namespace std;
void square(int arr[], int n)
{

    int sumeven = 0, sumodd = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)

        {
            sumeven += arr[i];
        }
        if (i % 2 != 0)

        {
            sumodd += arr[i];
        }
    }
    cout << "Even:" << " " << sumeven << " " << endl;
    cout << "odd:" << " " << sumodd << " " << endl;
    cout << "Differnece:" << " " << sumeven - sumodd << endl;
}
int main()
{
    int size;
    cout << "Enter n : ";
    cin >> size;
    int arr[size + 1];

    for (int i =0; i <size; i++)
    {
        cin >> arr[i];
    }

    square(arr, size);
}