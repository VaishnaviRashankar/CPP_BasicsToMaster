//Power Function
// Make a function which calculates 'a' raised to the power 'b' using recursion
#include <iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else if (b%2==0)
    {
        return  power(a,b/2)*power(a,b/2);
       

    }
    else
    {
    return a*power(a,b-1);
    }
}
int main()
{
    int a,b;
    cout<<"Enter Base :";
    cin>>a;
    cout<<"Enter Power :";
    cin>>b;
    cout<<a<<" "<<"raised to the power"<<" "<<b<<" = "<<power(a,b);

}