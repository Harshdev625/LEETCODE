class Solution {
public:
    int m=0,n=0;
    bool check(vector<vector<int>>& grid2,int row,int col){
        if(row<0 || row>=m || col<0 || col>=n)return false;
        if(grid2[row][col]==0)return false;
        return true;
    }
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int row,int col,bool & final){
        grid2[row][col]=0;
        if(grid1[row][col]==0)final=false;
        if(check(grid2,row-1,col))dfs(grid1,grid2,row-1,col,final);
        if(check(grid2,row+1,col))dfs(grid1,grid2,row+1,col,final);
        if(check(grid2,row,col-1))dfs(grid1,grid2,row,col-1,final);
        if(check(grid2,row,col+1))dfs(grid1,grid2,row,col+1,final);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        m=grid1.size(),n=grid1[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1 && grid1[i][j]==1){
                    bool final=true;
                    dfs(grid1,grid2,i,j,final);
                    if(final)count++;
                }
            }
        }
        return count;
    }
};
