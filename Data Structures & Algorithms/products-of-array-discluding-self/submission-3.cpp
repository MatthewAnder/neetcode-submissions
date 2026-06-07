class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int j = 1;

        res.push_back(j);
        for (int i = 1; i < n; i++) {
            int curr = nums[i-1] * j;
            res.push_back(curr);
            j = curr;
        }

        j = 1;
        for (int i = n-2; i>=0; i--) {
            int curr = nums[i+1] * j;
            res[i] *= curr;
            j = curr;
        }

        return res;
    }
};
