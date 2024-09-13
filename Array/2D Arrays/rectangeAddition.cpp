// Given a mtrix 'a' of dimensions nXm and 2 coordinates(l1,r1)and (l2,r2).Return the sum of the rectangle from(l1,r1)to(l2,r2)
#include <iostream>
using namespace std;
int main()
{

    int arr[5][5];
    int maxi = INT_MAX;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << arr[i][j] << "  ";
        }
         cout << endl;
    }
    int l1=0,r1=0,l2=0,r2=0;
    cout<<"Enter Coordinate :"<<" ";
    cin>>l1>>r1>>l2>>r2;
   int sum=1;
    for (int i = l1; i <l2; i++)
    {
        for (int j = r1; j <r2; j++)
        {
            sum+=arr[i][j];
        }
       
    }
     cout << "Summ :" << sum;
}

/*
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "Enter the dimensions of the matrix: ";
    cin >> n >> m;

    int arr[n][m];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the coordinates (l1, r1) and (l2, r2): ";
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Ensure coordinates are within the matrix boundaries
    if (l1 < 0 || r1 < 0 || l2 >= n || r2 >= m || l1 > l2 || r1 > r2) {
        cout << "Invalid coordinates.\n";
        return 1;
    }

    int sum = 0;
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of the rectangle: " << sum << endl;

    return 0;
}*/