class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> dict;

        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            // if (!dict.count(curr)) {
            //     dict[curr] = 0;
            // }

            dict[curr]++;
            if (dict[curr] > 1)
                return true;
        }

        return false;
    }
};