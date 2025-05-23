/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
 The overall run time complexity should be O(log (m+n)).  */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        float sum = 0;
        for(int i = 0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        int m = nums1.size();
        sort(nums1.begin(),nums1.end());
        if(m%2!=0)
        {
            return float(nums1[m/2]);
        } 
        else
        {
            float ans = (nums1[(m/2)-1] + nums1[(m/2)])/2.0;
            return ans;
        }
    }

};
