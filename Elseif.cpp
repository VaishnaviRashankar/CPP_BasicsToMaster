// Take input percentage of a student and print the grade according to marks:
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the percentage :";
    cin >> m;
    if (m >= 81 && m <= 100)
    {
        cout << "A Grade";
    }
    else if (m >= 61 && m <= 80)
    {
        cout << "B Grade";
    }
    else if (m >= 41 && m <= 60)
    {
        cout << "c Grade";
    }
   else
    {
        cout << "Fail";
    }
}