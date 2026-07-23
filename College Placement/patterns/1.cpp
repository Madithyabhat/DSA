/*   n=4   4 4 4 4 4 4 4
           4 3 3 3 3 3 4
           4 3 2 2 2 3 4
           4 3 2 1 2 3 4
           4 3 2 2 2 3 4
           4 3 3 3 3 3 4
           4 4 4 4 4 4 4 
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int rows=2*n-1;
    k=rows/2;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            int res=abs(i-k)>abs(j-k)? abs(i-k):abs(j-k);
            cout<< res+1<< " " ;  //res+1 for descending , for ascending n-res
        }
        cout<<"\n";
    }
    



}