// print the given pattern
/*

1
2 2
3 3 3
4 4 4 4
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
            cout << i << " ";
        }
        cout << "\n";
    }
}