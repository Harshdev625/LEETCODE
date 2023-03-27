class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>matrix=grid;
        for(int i=1;i<m;i++)matrix[i][0]+=matrix[i-1][0];
        for(int i=1;i<n;i++)matrix[0][i]+=matrix[0][i-1];
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                matrix[i][j]+=min(matrix[i][j-1],matrix[i-1][j]);
            }
        }
        return matrix[m-1][n-1];
    }
};
