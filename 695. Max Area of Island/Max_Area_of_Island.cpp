class Solution {
public:
    int ans=0;
    int m=0,n=0;
    bool isvalid(int row,int col,vector<vector<int>>&grid){
        if(row<0 || row>=m || col<0 || col>=n)return false;
        if(grid[row][col]==0)return false;
        return true;
    }
    void bfs(int row,int col,vector<vector<int>>&grid){
        queue<pair<int,int>>q;
        int count=1;
        q.push({row,col});
        int r,c;
        while(!q.empty()){
            r=q.front().first,c=q.front().second;
            q.pop();
            if(isvalid(r-1,c,grid)){
                count++;
                grid[r-1][c]=0;
                q.push({r-1,c});
            }
            if(isvalid(r,c+1,grid)){
                count++;
                grid[r][c+1]=0;
                q.push({r,c+1});
            }
            if(isvalid(r,c-1,grid)){
                count++;
                grid[r][c-1]=0;
                q.push({r,c-1});
            }
            if(isvalid(r+1,c,grid)){
                count++;
                grid[r+1][c]=0;
                q.push({r+1,c});
            }
        }
        ans=max(ans,count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    bfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};
