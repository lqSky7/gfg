class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size(), sum = n*(n+1)/2;
        for (auto it : nums){
            sum -= it;
        }
        return sum;
    }
};
