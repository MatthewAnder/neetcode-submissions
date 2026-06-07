class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        for (const string& c : tokens) {
            if (c == "+") {
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.emplace_back(a + b);
            } else if (c =="-") {
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.emplace_back(b - a);
            } else if (c =="*") {
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.emplace_back(a * b);
            } else if (c =="/") {
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.emplace_back(b / a);
            } else {
                stack.emplace_back(stoi(c));
            }
        }
        return stack.back();
    }
};
