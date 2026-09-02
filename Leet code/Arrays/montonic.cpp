// 896. Monotonic Array
// An array is monotonic if it is either monotone increasing or monotone decreasing.
// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
// Given an integer array nums, return true if the given array is monotonic, or false otherwise.
// Example 1:
// Input: nums = [1,2,2,3]
// Output: true
// Example 2:
// Input: nums = [6,5,4,4]
// Output: true
// Example 3:
// Input: nums = [1,3,2]
// Output: false

// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) 
//     {
//         int i=0;
//         int j=0;
//         int n=nums.size();
//         while(i<n-1 && nums[i]<=nums[i+1])
//         {
//            i++;
//         }
//          while(j<n-1 && nums[j]>=nums[j+1])
//         {
//            j++;
//         }
        
//         if(i==n-1||j==n-1)
//         return true;
//         else
//         return false;
        
//     }
// };