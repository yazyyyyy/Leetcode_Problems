//Problem link: https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> >ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<(int)nums.size()-2; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int target = 0 - nums[i];
                int l = i + 1;
                int r = (int)nums.size() - 1;
                int lp,rp;
                while(l<r){
                    lp = nums[l];
                    rp = nums[r];
                    if(lp + rp == target){
                        vector<int> tri;
                        tri.push_back(nums[i]);
                        tri.push_back(lp);
                        tri.push_back(rp);
                        ans.push_back(tri);
                        while(l<r && nums[l]==nums[l+1]) l++;
                        while(l<r && nums[r]==nums[r-1]) r--;
                        l++;
                        r--;
                    }else if(lp + rp < target){
                        l++;
                    }else{
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};