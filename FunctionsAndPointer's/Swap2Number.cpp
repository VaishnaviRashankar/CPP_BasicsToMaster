// Swap 2 numbers
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x:" << " ";
    cin >> x;
    cout << "Enter y:" << " ";
    cin >> y;
    int temp;
    cout << "After Swap : " << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "X : " << x << endl
         << "Y : " << temp;
}
/*
without using extar variable*
x=x+y
y=x-y
x=x-y
*/