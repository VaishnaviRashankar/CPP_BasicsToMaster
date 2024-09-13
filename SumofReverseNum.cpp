// WAP to print sum of Given number and it reverse.

/*
Method
1]Sum of Digit
2]n%10 gives the last digit
3]1+2+3 = 3+2+1*/
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0,original=0;

    cout << "Enter number : " << " ";
    cin >> n;
original = n;
    while (n != 0)
    {
        int last_digit = n % 10;// gives the last digit
             
        rev = (rev * 10) + last_digit; 
        n = n / 10;//Removes the last digit
          
         
    }
    cout <<"Reverse Number is :" <<rev<<endl;
   
    
     cout<<"sum of Original number and Reverse number  = "<<original+rev<<endl;
     
}