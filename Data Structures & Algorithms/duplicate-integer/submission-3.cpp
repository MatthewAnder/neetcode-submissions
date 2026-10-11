class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
            if (mp[num] > 1)
                return true;
        }


        return false;
    }
};