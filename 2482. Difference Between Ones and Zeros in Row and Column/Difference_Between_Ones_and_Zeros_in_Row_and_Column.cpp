class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
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
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                grid[i][j]=2*row[i]+2*col[j]-r-c;
            }
        }
        return grid;
    }
};
