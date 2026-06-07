class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1;
        int postfix = 1;
        vector<int> res;

        res.push_back(prefix);
        for (int i = 1; i < n; i++) {
            int curr = prefix * nums[i-1];
            prefix = curr;
            res.push_back(curr);
        }

        for (int i = n - 2; i >= 0; i--) {
            int curr = postfix * nums[i+1];
            postfix = curr;
            res[i] = res[i] * curr;
        }

        return res;
    }
};
