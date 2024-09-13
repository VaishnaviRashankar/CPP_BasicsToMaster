// Passing Array to Function
#include <iostream>
using namespace std;
void change(int arr[])
{
    arr[0] = 9;
}
int main()
{
    // int x=3;
    // cout<<x<<endl;
    // change(x);
    // cout<<x<<endl;
    int arr[3] = {1, 2, 3};
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr);
    cout<<"After change"<<endl;
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << " ";
    }
}
//Array goes to by address(Pass by refernce)