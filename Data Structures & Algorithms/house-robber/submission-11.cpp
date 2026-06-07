class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        else if (n == 1) return nums[0];
        else if (n == 2) return max(nums[0], nums[1]);

        vector<int> memo(n);

        memo[0] = nums[0];
        memo[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            memo[i] = max(nums[i] + memo[i-2], memo[i-1]);
        }

        return memo[n-1];
        
    }
};
