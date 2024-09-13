// print the given pattern
/*
1
0 1
1 0 1
0 1 0 1
We use Nested Loop
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of Row : " << " ";
    cin >> r;

    int a = 1;
    for (int i = 1; i <= r; i++) // this is for row
    {

        for (int j = 1; j <= i; j++) // this is for colum

        {
            if ((i + j )% 2 == 0)

                cout << 1;

            else

                cout << 0;
        }
        cout << "\n";
    }
}