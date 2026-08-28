class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int beg = 0, end = nums.size() - 1;

        // Find first position
        while (beg <= end) {
            int mid = beg + (end - beg) / 2;

            if (nums[mid] == target) {
                first = mid;
                end = mid - 1; 
            }
            else if (nums[mid] < target) {
                beg = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        beg = 0;
        end = nums.size() - 1;

        // Find last position
        while (beg <= end) {
            int mid = beg + (end - beg) / 2;

            if (nums[mid] == target) {
                last = mid;
                beg = mid + 1;
            }
            else if (nums[mid] < target) {
                beg = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};