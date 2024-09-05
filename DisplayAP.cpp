// Display this AP - 1,3,5,7,9 .. upto 'n' terms? AP=Arithmatic Progrestion
// Two consective terms Differnece must be same 1,5,9,13  difference =4

/*
  Method -1 :
  n'th term Formula
   an = a+(n-1)d   d = common Differnece n=1
   an = 1+(n-1)2
   an = 1+ 2n-2
   an = 2n-1

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n terms";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << " ";
    }
}

/*
Method 2 :
using extra Variable & Keeping 'i' only for the iteration
Code 
int a;
a=1;
for (int i = 1; i <= n; i ++)
    {
        cout << a << " ";
        a=a+2;
    }*/
