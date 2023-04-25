class Solution {
public:
    int m,n;
    int count(int r,int c,int val,vector<vector<int>>&board){
        int count=0;
        if(r-1>=0 && r<m && c>=0 && c<n)if(board[r-1][c])count++;
        if(r>=0 && r+1<m && c>=0 && c<n)if(board[r+1][c])count++;
        if(r>=0 && r<m && c-1>=0 && c<n)if(board[r][c-1])count++;
        if(r>=0 && r<m && c>=0 && c+1<n)if(board[r][c+1])count++;
        if(r-1>=0 && r<m && c-1>=0 && c<n)if(board[r-1][c-1])count++;
        if(r-1>=0 && r<m && c>=0 && c+1<n)if(board[r-1][c+1])count++;
        if(r>=0 && r+1<m && c-1>=0 && c<n)if(board[r+1][c-1])count++;
        if(r>=0 && r+1<m && c>=0 && c+1<n)if(board[r+1][c+1])count++;

        if(val==0){
            if(count==3)return 1;
            return 0;
        }
        if(count==2 || count==3)return 1;
        return 0;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>ans=board;
        m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=count(i,j,board[i][j],board);
            }
        }
        board = ans;
    }
};
