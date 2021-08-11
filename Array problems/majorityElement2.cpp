//Problem link: https://leetcode.com/problems/majority-element-ii/submissions/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Bayer Moore's voting algorithm
        vector<int> v;
        int cnt1 = 0, cnt2 = 0, num1 = -1, num2 = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == num1) cnt1++;
            else if(nums[i] == num2) cnt2++;
            else if(cnt1 == 0){
                num1 = nums[i];
                cnt1++;
            }else if(cnt2 == 0){
                num2 = nums[i];
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == num1) cnt1++;
            else if(nums[i] == num2) cnt2++;
        }
        if(cnt1 > (int)nums.size()/3)
            v.push_back(num1);
        if(cnt2 > (int)nums.size()/3)
            v.push_back(num2);
        return v;
    }
};