class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int l=INT_MAX;
                for(int k=0;k<n;k++){
                    if(k!=j)l=min(l,grid[i-1][k]);
                }
                grid[i][j]+=l;
            }
        }
        return *min_element(grid[n-1].begin(),grid[n-1].end());
    }
};
