// class Solution {
// public:
//     int maxProfit(vector<int>& prices) 
//     {
//           int n=prices.size();
//         vector<int>best(n);
//         best[0]=prices[0];
//         int maxsum=0;
     
//         for(int i=1;i<n;i++)
//         {
//             best[i]=min(best[i-1],prices[i-1]);
//          }
//          for(int i=0;i<n;i++)
//         {
//             int cursum=prices[i]-best[i];
//             maxsum =max(maxsum,cursum);
//          }

//          return maxsum;
         


        
//     }
// };