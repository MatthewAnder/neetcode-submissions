class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> myMap;
        vector<vector<string>> ret;

        for (string s : strs) { // n
            vector<int> count (26, 0);
            for (char c : s) {
                count[c - 'a'] += 1;
            }

            myMap[count].push_back(s);
        }

        for (auto& [_, value] : myMap) { // n
            ret.push_back(value);
        }

        return ret;
    }
};
