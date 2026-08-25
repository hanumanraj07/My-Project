// Last updated: 8/25/2026, 11:51:13 AM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++) {

            unordered_set<char> row;
            unordered_set<char> col;

            for(int j = 0; j < 9; j++) {
 
                if(board[i][j] != '.') {
                    if(row.count(board[i][j])) {
                        return false;
                    }
                    row.insert(board[i][j]);
                }
 
                if(board[j][i] != '.') {
                    if(col.count(board[j][i])) {
                        return false;
                    }
                    col.insert(board[j][i]);
                }
            }
        }
 
        for(int row = 0; row < 9; row += 3) {
            for(int col = 0; col < 9; col += 3) {

                unordered_set<char> st;

                for(int i = row; i < row + 3; i++) {
                    for(int j = col; j < col + 3; j++) {

                        if(board[i][j] != '.') {
                            if(st.count(board[i][j])) {
                                return false;
                            }
                            st.insert(board[i][j]);
                        }
                    }
                }
            }
        }

        return true;
    }
};