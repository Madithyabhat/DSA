#include<stdio.h>
int fib(int );
 
 int main()
 {
     int n,i=0,c,sum=0;
     printf("Enter the number\n");
     scanf("%d",&n);
     printf("Fibonacci series is \n");
     for(i=1;i<=n;i++){
         int result = fib(i);
         printf("%d\t",result);
         sum=sum+result;
     }
     
     //to find sum of all sequence for fun 
     printf("\nSum of sequence : %d\n",sum);
     
     //find fib of n
     
     printf("fib of %d is %d",n,fib(n));
     

 }
     int fib(int n)
     {
         if(n==0)
         {
             return 0 ;
         }
         else if(n==1)
         {
             return 1;
         }
         else 
         {
             return(fib(n-1)+fib(n-2));
             
         }
     }
 
