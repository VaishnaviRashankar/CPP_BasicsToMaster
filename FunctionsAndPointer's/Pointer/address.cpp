//POINTER : To Store the address of any dataType we use the Pointer
#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int *p=&x;
    cout << &x << endl;
    cout << p<< endl;
    cout << x << endl;
    
    cout << *p << endl;
    //1st time output
    //0xef8d5ff6ac
    //2nd time
    //0x9ab79ffe5c
}

//Access the value of the variable whose address is in the pointer ->using derefernce/#operator