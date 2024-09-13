// print the given pattern
/*

A B C D
A B C D
A B C D
A B C D
We use Nested Loop
*/

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the Number os Row : " << " ";
    cin >> r;
    cout << "Enter the number of Colum : " << " ";
    cin >> c;
    cout << "Capital Alphabets :" << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {

            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
    cout << "Small Alphabets :" << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {

            cout << (char)(j + 96) << " ";
        }
        cout << endl;
    }
}