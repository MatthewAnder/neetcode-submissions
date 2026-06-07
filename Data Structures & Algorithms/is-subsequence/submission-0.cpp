class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        
        vector<vector<int>> memo(n, vector<int>(m, -1));
        return helper(s, t, 0, 0, memo);
    }

    bool helper(const string& s, const string& t, int i, int j, vector<vector<int>>& memo) {
        if (i == s.size()) return 1;
        if (j == t.size()) return 0;
        if (memo[i][j] != -1) return memo[i][j];
        if (s[i] == t[j])
            memo[i][j] = helper(s, t, i+1, j+1, memo);
        else 
            memo[i][j] = helper(s, t, i, j+1, memo);

        return memo[i][j];
    }
};