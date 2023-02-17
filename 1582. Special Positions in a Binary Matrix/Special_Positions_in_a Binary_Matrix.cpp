class Solution {
public:
    int numSpecial(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int>row;
        vector<int>col;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++){
            int sum=0;
            for(int j=0;j<c;j++){
                sum+=grid[i][j];
            }
            row.emplace_back(sum);
        }
        for(int i=0;i<c;i++){
            int sum=0;
            for(int j=0;j<r;j++){
                sum+=grid[j][i];
            }
            col.emplace_back(sum);
        }
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1 && row[i]<=1 && col[j]<=1)ans++;
            }
        }
        return ans;
    }
};
