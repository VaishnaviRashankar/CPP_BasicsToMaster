// This Program  is for Pass by value and also with blundar
#include <iostream>
using namespace std;

void display(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 45;
    int y = 34;
    display(&x, &y);
    cout << "After Swap :" << "x=" << x << "y=" << y << endl;
}
