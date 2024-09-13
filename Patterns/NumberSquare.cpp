// print the given pattern
/*

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
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
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}