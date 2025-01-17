// iterative method 

#include<stdio.h>

void main()
{
    int num,fact=1;
    printf("Enter a number: \n");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        fact=fact*i; // Logic is 5*4*3*2*1 = 120
    }
    
    printf("%d",fact);
   
}



//using recursion

#include<stdio.h>
int calc_fact(int num){
    if(num==0){ //define base case
        return 1;
    }    
    return num * calc_fact(num-1); // calling function and then backtracking
}

void main()
{
    int num,result;
    printf("Enter a number: \n");
    scanf("%d",&num);
    result=calc_fact(num);
    printf("%d",result);
}