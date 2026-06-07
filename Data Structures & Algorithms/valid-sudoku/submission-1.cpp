class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, unordered_set<char>> colMap;
        map<int, unordered_set<char>> rowMap;
        map<pair<int, int>, unordered_set<char>> squareMap;


        for (int y = 0; y < 9; y++) {
            for (int x = 0; x < 9; x++) {
                char curVal = board[y][x];
                if (curVal == '.')
                    continue;
                
                if (colMap[x].count(curVal) ||
                    rowMap[y].count(curVal) ||
                    squareMap[{x /  3, y / 3}].count(curVal))
                    return false;
                colMap[x].insert(curVal); 
                rowMap[y].insert(curVal);
                squareMap[{x / 3, y / 3}].insert(curVal);
            }
        }

        return true;
    }
};
