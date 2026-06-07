class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>, vector<string>> mp;

        for (string str : strs) {
            vector<int> count(26, 0);
            for (char c : str) {
                count[c - 'a']++;
            }
            mp[count].push_back(str);
        }

        for (const auto& [_, value] : mp) {
            res.push_back(value);
        }

        return res;
    }
};
