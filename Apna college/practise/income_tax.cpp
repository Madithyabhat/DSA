#include<iostream>
using namespace std;

int main()
{
    int tax=0;
    int amount;
    cout<<"Enter income"<<endl;
    cin>>amount;

    if(amount<500000)
    tax=amount*0.0;

    
   else if(amount>=500000 && amount<1000000)
    tax=amount*0.2;

    else
    tax=amount*0.3;

    cout<<"tax="<<tax<<endl;
    return 0;




    
}