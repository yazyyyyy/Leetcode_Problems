//Problem link: https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        unordered_map<int, int> pair;
        for(int i=0; i<nums.size(); i++){
            if(pair.find(target - nums[i])==pair.end()){
                pair[nums[i]] = i;
            }else{
                sol.push_back(pair[target - nums[i]]);
                sol.push_back(i);
                break;
            }
        }
        return(sol);
    }
};