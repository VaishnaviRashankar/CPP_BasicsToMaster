// Find the minimum element in a given matrix
#include <iostream>
using namespace std;
int main()
{

    int arr[2][2];
    int maxi = INT_MAX;

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
   
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            maxi = min(maxi, arr[i][j]);
        }
       
    }
     cout << "Minimum value in the matrix is :" << maxi;
}