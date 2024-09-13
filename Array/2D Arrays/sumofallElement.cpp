//Find the sum of all element in a given matrix

#include <iostream>
using namespace std;
int main()
{

    int arr[2][2];
   

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "  ";
        }
         cout << endl;
    }
   cout<<"Sum of Element :";
   int sum=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          sum+=arr[i][j]; 
        }
       
    }
     cout << "Minimum value in the matrix is :" << sum;
}