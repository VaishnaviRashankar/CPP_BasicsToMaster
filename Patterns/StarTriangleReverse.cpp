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
  int size;

  cout << "Enter the size of the row: ";
  cin >> size;
  for (int i = 1; i <= size; i++) // row
  {
    for (int j = 1; j <= size - i; j++) // spaces
    {

      cout << "  ";
    }
    for (int j = 1; j <= i; j++) // colum
    {

      cout << j << " ";
    }
    cout << endl;
  }
}