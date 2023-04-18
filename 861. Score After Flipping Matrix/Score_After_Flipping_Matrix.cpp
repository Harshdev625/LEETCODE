class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         for(int i=0;i<n;i++){
            if(!grid[i][0]){
                for(int j=0;j<m;j++){
                    grid[i][j] ^= 1;
                }
            }
        }
         for(int j=1;j<m;j++){
            int count=0;
            for(int i=0;i<n;i++){
                count += grid[i][j];
            }
            if(count <= (n-1)/2){
                for(int i=0;i<n;i++){
                    grid[i][j] ^= 1;
                }
            }
        }
        int total=0;
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=m-1;j>=0;j--){
                if(grid[i][j])k+=pow(2,m-j-1);
            }
            total+=k;
        }
        return total;
    }
};
