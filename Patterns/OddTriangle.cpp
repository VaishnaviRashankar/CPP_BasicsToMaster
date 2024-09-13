// print the given pattern
/*
1 
1 3 
1 3 5
1 3 5 7
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
        int a=1;
       for (int j=1;j<=i;j++) // this is for colum
        
        {
            cout<<a<<" ";
            a+=2;

        }
        cout << "\n";
    }
    
    
}