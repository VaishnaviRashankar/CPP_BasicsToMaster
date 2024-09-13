// print the given pattern
/*
    ****
   ****
 ****
****
We use Nested Loop
*/
#include <iostream>
using namespace std;
int main()
{
    int n,c;
    cout << "Enter the number of Row : " << " ";
    cin >> n;
    cout << "Enter the number of Col: " << " ";
    cin >> c;

    
    for (int i = 1; i <= n; i++) // this is for row
    {

        for (int j = 1; j <=n-i; j++) // this is for colum

        {
            cout<<" ";
        }
         for (int j = 1; j <=c; j++) // this is for colum

        {
            cout<<"*";
        }
        cout << "\n";
    }
}