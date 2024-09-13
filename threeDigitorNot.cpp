// multiple condition using && and ||
// Question : Take positive integer input and tell if it is a three digit number or not

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if (a > 99 and a < 1000) // and both condition True    
    {
        cout << "Bade bhai Three digit number hai ";
    }
    else
    {
        cout << "Nhi bhai nhi Three digit number nhi hai..";
    }
}