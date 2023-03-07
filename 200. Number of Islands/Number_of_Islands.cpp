class Solution {
public:
    int count=0;
    int n=0,m=0;
    bool isvalid(int row,int col,vector<vector<char>>&grid){
        if(row<0 || row>=n || col<0 || col>=m)return false;
        if(grid[row][col]=='0')return false;
        return true;
    }
    void helper(int row,int col,vector<vector<char>>&grid){
        queue<pair<int,int>>q;
        q.push({row,col});
        int r,c;
        while(!q.empty()){
            r=q.front().first,c=q.front().second;
            q.pop();
            if(isvalid(r+1,c,grid)){
                q.push({r+1,c});
                grid[r+1][c]='0';
            }
            if(isvalid(r-1,c,grid)){
                q.push({r-1,c});
                grid[r-1][c]='0';
            }
            if(isvalid(r,c+1,grid)){
                q.push({r,c+1});
                grid[r][c+1]='0';
            }
            if(isvalid(r,c-1,grid)){
                q.push({r,c-1});
                grid[r][c-1]='0';
            }
        }
        count++;
    }
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    grid[i][j]=0;
                    helper(i,j,grid);
                }
            }
        }
        return count;
    }
};
