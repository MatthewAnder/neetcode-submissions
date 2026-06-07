class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int left = 0, right = matrix[0].size();
        int top = 0, bot = matrix.size();

        while (left < right && top < bot) {
            for (int i = left; i < right; i++)
                res.push_back(matrix[top][i]);
            top++;

            for (int i = top; i < bot; i++)
                res.push_back(matrix[i][right-1]);
            right--;

            if (left >= right || top >= bot)
                break;

            for (int i = right - 1; i >= left; i--)
                res.push_back(matrix[bot - 1][i]);

            bot--;

            for (int i = bot - 1; i >= top; i--)
                res.push_back(matrix[i][left]);
            left++;

        }

        return res;
    }
};
