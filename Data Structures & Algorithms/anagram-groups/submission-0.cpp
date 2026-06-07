class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> myMap;
        vector<vector<string>> ret;

        for (string s : strs) {
            string temp = s;
            sort(s.begin(), s.end());
            myMap[s].push_back(temp);
        }

        for (auto& [_, value] : myMap) {
            ret.push_back(value);
        }

        return ret;
    }
};
