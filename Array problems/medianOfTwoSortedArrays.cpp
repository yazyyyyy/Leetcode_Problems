//Problem link: https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        nums3 = nums1;
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        int mid;
        double ans;
        if(nums3.size() % 2 != 0){
            mid = (nums3.size()/2);
            ans = nums3[mid];
        }else{
            mid = nums3.size()/2;
            ans = (double)(nums3[mid-1]+nums3[mid])/2;
        }
        return ans;
    }
};