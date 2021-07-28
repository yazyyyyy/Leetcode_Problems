//Problem link: https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int max_a = 0;
        while(l<r){
            int lh = height[l];
            int rh = height[r];
            int min_h = min(lh, rh);
            max_a = max(max_a, ((r-l)*min_h));
            if(lh<rh) l++;
            else r--;
        }
        return max_a;
    }
};