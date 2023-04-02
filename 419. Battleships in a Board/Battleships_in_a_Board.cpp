class Solution {
public:
    void dfs(vector<vector<char>>&board,int row,int col,int m,int n){
        if(row<0 || col<0 || row>=m || col>=n || board[row][col]=='.')return;
        board[row][col]='.';
        dfs(board,row+1,col,m,n);
        dfs(board,row,col+1,m,n);
    }
    int countBattleships(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int m= board.size();
        int n= board[0].size();
        int battleship=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    battleship++;
                    dfs(board,i,j,m,n);
                }
            }
        }
        return battleship;
    }
};
