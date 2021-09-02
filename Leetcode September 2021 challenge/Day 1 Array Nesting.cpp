class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0)
                continue;
            count = max(count, countNums(nums, i));
        }
        return count;
    }
    
private:
    int countNums(vector<int> &nums, int start){
        if(start<0 || start>=nums.size() || nums[start] < 0){
            return 0;
        }
        int step = nums[start];
        nums[start] = -1;
        return (1 + countNums(nums, step));
    }
    
};