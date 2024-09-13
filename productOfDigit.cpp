// WAP to print product of digit of a given number(There won't be a zero in the number)

/*
Method
1]Modules Operator
2]n%10 gives the last digit
3]1+2+3 = 3+2+1*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int p = 1;
    cout << "Enter number : " << " ";
    cin >> n;
    while (n > 0)
    {
        int last_digit = n % 10; // gives the last digit
        n = n / 10;              // Removes the last digit
        p = p * last_digit;
    }
    cout << p;
}