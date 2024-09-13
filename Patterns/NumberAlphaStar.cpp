// print the given pattern
/*

1
A B
1 2 3
A B C D
1 2 3 4 5
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
            if (i % 2 != 0)
                cout << j << " ";
            if (i % 2 == 0)
                cout << (char)(j + 64) << " ";
        }

        cout << "\n";
    }
}