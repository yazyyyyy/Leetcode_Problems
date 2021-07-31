//Problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                arr.push_back(nums[i]);
                count++;
            }
        }
        nums = arr;
        return count;
    }
};