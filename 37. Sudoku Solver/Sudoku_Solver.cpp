class Solution {
private:
    bool isValid(int row , int col , char c , vector<vector<char>>&board){
        for(int i = 0 ; i < 9 ; i++){
            if(board[row][i] == c) return false;

            if(board[i][col] == c) return false;

            if(board[3 * (row/3) + i/3][3 * (col/3) + i%3] == c) return false;
        }
        return true;
    }
    bool solveSudokuHelper(vector<vector<char>>&board){
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[0].size(); j++){
                if(board[i][j] == '.'){
                    for(char a = '1' ; a <= '9' ; a++){
                        if(isValid(i , j , a , board)){
                            board[i][j] = a;
                            if(solveSudokuHelper(board) == true) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solveSudokuHelper(board);
    }
};
