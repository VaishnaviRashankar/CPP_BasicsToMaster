//if cost price and selling price of an item is input through the keyboard,write a program to determine whetehr the seller has made profit or determine whether thr seller has made profit or incurred loss r no profit no loss.also determine how much profit he made or loss heincurred
#include<iostream>
using namespace std;
int main()
{
    int cp;
    int sp;
    cout<<"Enter cost price & selling price :";
    cin>>cp>>sp;
    if(cp<sp)
    {
        cout<<"Profit"<<endl;
        int p = sp-cp;
        cout<<"Profit : "<<p<<endl;
    }
    else if (cp>sp)
    {
         cout<<"Loss"<<endl;
         int l=cp-sp;
         cout<<"Loss : "<<l<<endl;

    }
    else 
    {
        cout<<"No Profit No Loss";
    }
}