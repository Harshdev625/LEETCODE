class Solution {
public:
    bool isvalid(int row, int col, char k, vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            if(board[row][i]==k && i!=col)return false;
        }
        for(int i=0;i<board.size();i++){
            if(board[i][col]==k && i!=row)return false;
        }
        int subgrid_row = (row/3)*3;
        int subgrid_col = (col/3)*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[subgrid_row+i][subgrid_col+j]==k && (subgrid_row+i)!=row && (subgrid_col+j)!=col){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    if(!isvalid(i,j,board[i][j],board)){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
