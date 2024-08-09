class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        return sum_V(nums, 0);
    }
    
    
    vector<int> sum_V(vector<int>& nums, int i){
    // vector<int> vv = [nums];
    if(i >= nums.size()){
        return nums;
    }

    if(i>0){
        nums[i] += nums[i-1];}
    return sum_V(nums, i+1);
    }
};