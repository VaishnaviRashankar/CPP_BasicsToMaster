// Take 3 numbers input and tell if they a=can be the sides of a triangle

// Sum of any two sides must be greater 3 Side
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the three Sides of Triangle ; ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "This is Triangle ";
    }
    else
    {
        cout << "This is not a triangle";
    }
}