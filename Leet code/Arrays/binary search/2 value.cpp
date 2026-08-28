// 34. Find First and Last Position of Element in Sorted Array
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:
// Input: nums = [], target = 0
// Output: [-1,-1]

// // class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = -1, last = -1;
//         int beg = 0, end = nums.size() - 1;

//         // Find first position
//         while (beg <= end) {
//             int mid = beg + (end - beg) / 2;

//             if (nums[mid] == target) {
//                 first = mid;
//                 end = mid - 1; 
//             }
//             else if (nums[mid] < target) {
//                 beg = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }

//         beg = 0;
//         end = nums.size() - 1;

//         // Find last position
//         while (beg <= end) {
//             int mid = beg + (end - beg) / 2;

//             if (nums[mid] == target) {
//                 last = mid;
//                 beg = mid + 1;
//             }
//             else if (nums[mid] < target) {
//                 beg = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }

//         return {first, last};
//     }
// }; 
xxkenfkfn   fesfs