//Problem link: https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sol = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum <0) sum = 0;
            sol = max(sol, sum);
        }
        if(sol==0){
            sol = *max_element(nums.begin(), nums.end());
        }
        return sol;
    }
};