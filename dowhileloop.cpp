// run one time atleast
/*
Syntax
do
{
//code
}while(another=='y')
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do 
    {
        cout << i << endl;
        i++;
    }while(i <= 10);
}