// print the given pattern
/*
          1
        1 2
      1 2 3
    1 2 3 4
We use Nested Loop
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of size : ";
    cin >> n;
    for (int i = 1; i <= n; i++) // row
    {
        for (int j = 1; j <= n - i; j++) // space
        {
            cout <<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}