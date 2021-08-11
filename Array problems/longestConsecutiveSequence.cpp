//Problem link: https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;
        for(int num : nums){
            hashSet.insert(num);
        }
        int ans = 0;
        for(int num : nums){
            if(!hashSet.count(num-1)){
                int cur = num;
                int streak = 1;
            
                while(hashSet.count(cur + 1)){
                    cur +=1;
                    streak +=1;
                }
                ans = max(ans, streak);
            }
        }
        return ans;
    }
};