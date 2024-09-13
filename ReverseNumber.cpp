// WAP to print reverse of a given number

/*
Method
1]Sum of Digit
2]n%10 gives the last digit
3]1+2+3 = 3+2+1*/
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;

    cout << "Enter number : " << " ";
    cin >> n;
    while (n != 0)
    {
        int last_digit = n % 10;       // gives the last digit
        rev = (rev * 10) + last_digit; //// Removes the last digit
        n = n / 10;
    }
    cout << rev;
}