// print the given pattern
/*
1 2 3 4
1 2 3
1 2
1
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
       for (int j=1;j<=r-i+1;j++) // this is for colum
        //for(int j=1;j<=r-i+1;j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout<<"\n";
    for (int i = 1; i <= r; i++) // this is for row
    {
       for (int j=1;j<=r-i+1;j++) // this is for colum
        //for(int j=1;j<=r-i+1;j++)
        {
            cout << i<< " ";
        }
        cout << "\n";
    }
}