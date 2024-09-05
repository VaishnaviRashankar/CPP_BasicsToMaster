// Another Replacement of if_else is Switch Statement
// Write a program to create a calculator that performs basic arithmatic operation(add,subtract,multiply and divide)using switch case. The calculator should input two numbers and an operator from user.
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char ch;
    cout << "Enter num1 and num2 :";
    cin >> n1 >> n2;
    cout << "Enter Your Choice : ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "Addition"<<endl;
        cout<<n1+n2;
        break;
    case '-':
        cout << "Substraction"<<endl;
        cout<<n1-n2;
        break;
    case '*':
        cout << "Multiplication"<<endl;
        cout<<n1*n2;
        break;
    case '/':
        cout << "Division"<<endl;
        cout<<n1/n2;
        break;
    default:
        cout << "Invalid input"<<endl;
    }
}