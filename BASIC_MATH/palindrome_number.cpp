/*
THERE ARE X NUMBER OF APPROACHES

1. APP 1 NAME
2.APP 2 NAME

APPRACH 1 EXPLAIN WITH TC=? S =?

*/

// TC = O(log(n)) SC = O(1)
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int temp = x;
        long int rev = 0;
        while (temp > 0)
        {
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if (rev == x)
        {
            return true;
        }
        return false;
    }
};