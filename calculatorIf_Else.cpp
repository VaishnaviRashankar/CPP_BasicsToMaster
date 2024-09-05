#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char ch;
    cout<<"Enter number's";
    cin>>num1>>num2;
    cout<<"Which arithmatic operator you want to perform :";
    cin>>ch;
    if(ch=='+')cout<<num1+num2;
    if(ch=='-')cout<<num1-num2;
    if(ch=='*')cout<<num1*num2;
    if(ch=='/')cout<<num1/num2;

}