/*   n=4  
           4 4 4 4 3 3 3 3 2 2 2 2 1 1 1 1
           4 4 4 3 3 3 2 2 2 1 1 1
           4 4 3 3 2 2 1 1
           4 3 2 1 
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
   for (i=n; i>=1; i--)
   {
    for ( j=n ; j>=1; j--)
    {
        for ( k = 1; k <=i; k++)
        {
            cout<<j<<" ";
        }
        
    }
    cout<<"\n";
    
   }
}
   
