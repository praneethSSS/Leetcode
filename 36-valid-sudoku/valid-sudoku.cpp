class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> columns(9);
        vector<unordered_set<int>> boxes(9);

        for(int row = 0;row < 9; row++){
            for(int col=0;col<9;col++){
                if(board[row][col] == '.'){
                    continue;
                }
                int value = board[row][col] - '0';

                int box = (row / 3) * 3 + (col / 3);

                if(rows[row].count(value) || columns[col].count(value) || boxes[box].count(value) ){
                    return false;
                }

                rows[row].insert(value);
                columns[col].insert(value);
                boxes[box].insert(value);
            }
        }
        return true;
    }
};