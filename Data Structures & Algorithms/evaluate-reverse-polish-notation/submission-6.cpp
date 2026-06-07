class Solution {
public:
    int dfs(vector<string>& tokens) {
        string token = tokens.back();
        tokens.pop_back();

        if (token != "+" && token != "*" && token != "-" && token != "/")
            return stoi(token);


        int left = dfs(tokens);
        int right = dfs(tokens);

        if (token == "+") {
            return left + right;
        } else if (token == "-") {
            return right - left;
        } else if (token == "*") {
            return left * right;
        } else if (token == "/") {
            return right / left;
        }
    }

    int evalRPN(vector<string>& tokens) {
        return dfs(tokens);
    }
};
