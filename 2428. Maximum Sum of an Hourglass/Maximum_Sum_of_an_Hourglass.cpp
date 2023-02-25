class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>>matrix=grid;
        int x=matrix.size(),y=matrix[0].size();
        for(int i=0;i<x;i++){
            for(int j=1;j<y;j++)
            matrix[i][j]+=matrix[i][j-1];
        }
        int ans=0,t=0;
        for(int j=1;j<y-1;j++){
            for(int i=0;i<x-2;i++){
                t=matrix[i][j+1]+grid[i+1][j]+matrix[i+2][j+1];
                if(j>1){
                    t-=matrix[i][j-2];
                    t-=matrix[i+2][j-2];
                }
                ans=max(ans,t);
            }
        }
        return ans;
    }
};
