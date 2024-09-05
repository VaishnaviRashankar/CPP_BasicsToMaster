// WAP to check if anumber is Composite or not
// Composite if n has extra factor/factors except 1 & n than it is composite //Opposite of prime
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to check if number is Composite or not:" << " ";
    cin >> n;
    bool x = true; // number is prime:a number that can only be divided by itself and 1 without remainders.
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            x = false;

            break;
        }
    }
    if(n==1)
    cout<<"Neither prime Nor Composite";
    else if (x == true)
        cout << "prime";
    else
        cout << "Composite";
}
