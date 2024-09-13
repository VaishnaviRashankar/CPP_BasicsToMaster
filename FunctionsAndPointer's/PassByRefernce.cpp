// This Program  is for Pass by Refernece  
#include <iostream>
using namespace std;

void display(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 45;
    int y = 34;
    display(x, y);
    cout << "After Swap :" << "x=" << x << "y=" << y << endl;
}
