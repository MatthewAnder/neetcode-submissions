class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> mp;
        vector<vector<int>> freq(nums.size()+1);

        for (int num : nums) {
            mp[num]++;
        }

        for (const auto& [key, value] : mp) {
            freq[value].push_back(key);
        }

        for (int i = nums.size(); i >= 0; --i) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k)
                    return res;
            }
        }
        
        return res;
    }
};
