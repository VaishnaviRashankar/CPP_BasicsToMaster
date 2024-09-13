// if an array contains N element, then check if the given array is a palindrome or not.
#include <iostream>
using namespace std;

    bool ispalindrome(int arr[],int n)
    {
        for(int i=0;i<n/2;i++)
        {
            if(arr[i]!=arr[n-i-1])
            {
                return false;
            }
            
        }
        return true;
    }

int main()
{
    int arr[] = {12, 23, 12};
    int n = sizeof(arr) / 4;
if(ispalindrome(arr,n))
{
    cout<<"The array is palindrome";
}
else
{
    cout<<"The array is not palindrome";
}
return 0;
}