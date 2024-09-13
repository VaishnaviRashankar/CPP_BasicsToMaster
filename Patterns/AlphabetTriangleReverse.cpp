// print the given pattern
/*
      A
     AB
    ABC
   ABCD
We use Nested Loop
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of Row : " << " ";
    cin >> n;

    int a = 1;
    for (int i = 1; i <= n; i++) // this is for row
    {

        for (int j = 1; j <=n-i; j++) // this is for space
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<(char)(j+64)<<" ";
        }
        cout << "\n";
    }
}