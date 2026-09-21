class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> rows;
        unordered_map<int, unordered_set<int>> cols;
        map<pair<int,int>, unordered_set<int>> squares;

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.') continue;
                if (rows[i].count((int)board[i][j]) ||
                    cols[j].count((int)board[i][j]) ||
                    squares[{i/3, j/3}].count((int)board[i][j]))
                    return false;
                rows[i].insert((int)board[i][j]);
                cols[j].insert((int)board[i][j]);
                squares[{i/3, j/3}].insert((int)board[i][j]);
            }
        }
        return true;
    }
};
