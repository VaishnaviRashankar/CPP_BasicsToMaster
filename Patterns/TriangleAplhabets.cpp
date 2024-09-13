// print the given pattern
/*

A
A B
A B C
A B C D
We use Nested Loop
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of Row : " << " ";
    cin >> r;
   
    for (int i = 1; i <= r; i++) // this is for row
    {
        for (int j = 1; j <= i; j++) // this is for colum
        {
            cout << (char)(j+64) << " ";
        }
        cout << "\n";
    }
}