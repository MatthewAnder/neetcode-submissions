class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int ret = 0;
        
        int left = 0, right = 0;
        int n = s.size();

        while (right < n) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            ret = max(ret, right - left + 1);
            right++;
        }

        return ret;
    }
};
