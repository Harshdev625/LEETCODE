class Solution {
public:
    int count=0;
    bool isvalid(int row,int col,vector<vector<int>>&grid){
        if(row==grid.size() || row==-1)return false;
        if(col==grid[0].size() || col==-1)return false;
        if(grid[row][col]==-1)return false;
        return true;
    }
    bool checker(vector<vector<int>>&grid){
        for(int row=0;row<grid.size();row++){
            for(int col=0;col<grid[0].size();col++){
                if(grid[row][col]==0)return false;
            }
        }
        return true;
    }
    void helper(vector<vector<int>>&grid,int row,int col){
        if(grid[row][col]==2){
            if(checker(grid))count++;
            return;
        }
        grid[row][col]=-1;
        if(isvalid(row+1,col,grid))helper(grid,row+1,col);
        if(isvalid(row-1,col,grid))helper(grid,row-1,col);   
        if(isvalid(row,col+1,grid))helper(grid,row,col+1);   
        if(isvalid(row,col-1,grid))helper(grid,row,col-1);
        grid[row][col]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int flag=0;
        pair<int,int>p;
        for(int row=0;row<grid.size() && flag==0;row++){
            for(int col=0;col<grid[0].size() && flag==0;col++){
                if(grid[row][col]==1){
                    p={row,col};
                    flag=1;
                }
            }
        }
        helper(grid,p.first,p.second);
        return count;
    }
};
