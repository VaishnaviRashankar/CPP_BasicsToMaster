// print the given pattern
/*

*
* *
* * *
* * * *
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
        for (int j = 1; j <= i; j++) //Colum goes upto row
        {

            cout <<"*" << "";
        }
        cout << endl;
    }
   
}