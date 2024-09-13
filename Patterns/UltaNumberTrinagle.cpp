// print the given pattern
/*
4 3 2 1
4 3 2
4 3
4
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
       for (int j=r;j>=i;j--) // this is for colum
        //for(int j=1;j<=r-i+1;j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    
    
}