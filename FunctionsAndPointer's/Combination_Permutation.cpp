// combination and Permutation
/*
combination:
n>=r
n,r = nCr  //n choose r :number of way to select 2 choclate from 5


Formula :

 nCr = n!/r!*(n-r)!

*/

#include <iostream> //# -> preprocessor io -> input/output
using namespace std;
int fact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  return f;
}
int main()
{

  // a = n!
  //  b= r!
  //  c=n-r!

  int n, r;
  cout << "Enter n :";
  cin >> n;
  cout << "Enter r :";
  cin >> r;
  int a = fact(n);
  int b = fact(r);
  int c = fact(n-r);
  cout << a / (b * c);
}
