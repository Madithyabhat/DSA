#include<iostream>
using namespace std;

int main()
{
    float pencil,pen,eraser;
    cout<<"Enter the values";
    cin>>pencil>>pen>>eraser;

    float sum= pencil+pen+eraser;
    float bill=sum + sum*0.18;

    cout<<"SUM="<<sum<<endl;

    cout<<"BILL ="<<bill<<endl;

    float diff=bill-sum;

    cout<<"DIFF="<<diff;

}