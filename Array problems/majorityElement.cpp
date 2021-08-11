//Problem link: https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using moore's voting algorithm
        int ele, cnt = 0;
        for(int i=0; i<nums.size() ; i++){
            if(cnt == 0)
                ele = nums[i];
            if(nums[i] == ele)
                cnt++;
            else
                cnt--;
        }
        return ele;
    }
};