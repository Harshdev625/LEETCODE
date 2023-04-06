class Solution {
public:
    bool dfs(vector<vector<int>>& grid,int row,int col,int m,int n){
        if(row<0 || col<0 || row>m-1 || col>n-1)return false;
        if(grid[row][col])return true;
        grid[row][col]=1;
        bool a=dfs(grid,row+1,col,m,n);
        bool b=dfs(grid,row-1,col,m,n);
        bool c=dfs(grid,row,col+1,m,n);
        bool d=dfs(grid,row,col-1,m,n);
        return a && b && c && d;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!grid[i][j]){
                    if(dfs(grid,i,j,m,n))count++;
                }
            }
        }
        return count;
    }
};
