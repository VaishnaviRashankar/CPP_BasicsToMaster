// Write a function to calculate the n'th fibonacci number using recursion
#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 1||n==2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
    
}
int main()
{
    int a;
    cout<<"Enter number :";
    cin>>a;
    cout << fibo(a);
}
/*Fibonacci series : 

1 1 2 3 5 8 13 21 34 55 89
1 2 3 4 5 6 7  8  9  10 11*/