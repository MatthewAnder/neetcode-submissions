class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int best = 0;
        int l = 0, curr = 0;
        int n = s.size();

        unordered_set<char> window;

        while (curr < n) {
            while (window.find(s[curr]) != window.end()) {
                window.erase(s[l]);
                l++;
            }
            
            window.insert(s[curr]);
            best = max(best, curr - l + 1);
            curr++;
        }
        
        return best;
    }
};
