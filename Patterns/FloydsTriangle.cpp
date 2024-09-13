// print the given pattern
/*
1
2 3
4 5 6
7 8 9 10
We use Nested Loop
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of Row : " << " ";
    cin >> r;
     
    int a=1;
    for (int i = 1; i <= r; i++) // this is for row
    {
       
       for (int j=1;j<=i;j++) // this is for colum
       
        {
            cout << a<< " ";
            a++;
        }
        cout << "\n";
    }
    
    
}