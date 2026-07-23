// 258. Add Digits

class Solution {
public:
    int addDigits(int num) 
    {
        int n=0;
        int sum=0;
        while(num>0)
        {
          n=num%10;
          sum=sum+n;
          num=num/10;
            
        }
        if(sum>=10)
        return addDigits(sum) ;  

        else
        return sum;



    }  
    

    
};