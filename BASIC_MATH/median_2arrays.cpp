class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
       int m=nums1.size();
       int n=nums2.size();

       vector<int> merged;

       for(int i=0;i<m;i++)
       {
         merged.push_back(nums1.at(i));
       }
        for(int i=0;i<n;i++)
       {
         merged.push_back(nums2.at(i));
        
       }

       sort(merged.begin(),merged.end());

       int size= merged.size();

       if(size%2==1)
       return merged[size/2];
       else
       return (merged[size/2]+merged[(size/2)-1])/2.0;
      
    }
};