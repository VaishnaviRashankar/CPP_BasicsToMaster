// Take 3 positive integers input and print the greatest of them
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number  : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout <<a << "is greater than" << b << "and " <<c;
    }
    else if (b > a && b > a)
    {
        cout << b  << "is greater than" << a << "and " <<c;
    }
    else
    {
        cout << c << "is greater than" << a <<"and " <<b;
    }
}