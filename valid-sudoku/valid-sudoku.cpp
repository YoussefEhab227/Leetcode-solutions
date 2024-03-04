class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int line [9][9];    
        int col [9][9];
        int square [9][9];
        for(int i = 0; i < 9 ; i++)
            {
                for(int j = 0; j < 9; j++)
                if(board[i][j] != '.')
                {
                    int pos = board[i][j] - '0' - 1;
                    int pos_square = (i/3) + (j / 3)*3;
                    if(++line[i][pos] > 1 || ++col[pos][j] > 1 || ++square[pos_square][pos] > 1)return false;
                }
            }
        return true;
    }
        
};