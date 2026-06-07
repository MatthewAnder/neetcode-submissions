class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        
        vector<int> house1 (nums.begin()+1, nums.end());
        vector<int> house2 (nums.begin(), nums.end()-1);
        return max(helper(house1), helper(house2));
    }

    int helper(vector<int>& nums) {
        int n = nums.size();

        if (nums.empty()) return 0;
        if (n == 1) return nums[0];
        
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        }

        return dp.back();
    }
};
