// Write a program to reverse the array without using any extra array

#include <iostream>
using namespace std;
void square(int arr[], int n)
{

    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
/*
int main()
{
int i=0;
int j=n-1;
while(i<j)
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;}
}*/
int main()
{
    int size;
    cout << "Enter n : ";
    cin >> size;
    int arr[size + 1];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    square(arr, size);
}