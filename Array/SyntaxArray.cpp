#include <iostream>
using namespace std;
int main()
{
    // int x[5];//Declaration of array
    //      __ __ __ __ __
    //  x= |__|__|__|__|__|
    //         0  1  2   3 4

    //     x[0] = 4;  initializing of array element (invidual)

    int n;
    cout << "enter the N :";
    cin >> n;
    int arr[n];
cout<<"Enter the element :";
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number's" << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}