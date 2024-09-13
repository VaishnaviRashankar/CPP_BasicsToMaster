// Write a program to add two matrices
// two matrices add when there is same dimensions in two matrices
#include <iostream>
using namespace std;
int main()
{

    int arr[2][2];
    int arr2[2][2];
    cout << "Enter matrix1:" << " ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter matrix2:" << " ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int sum[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    cout << "Addition of two matrix :";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j]<<" ";
        }
    }
}