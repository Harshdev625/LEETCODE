class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int m=matrix.size();
        if(m==0)return 0;
        if(m == 1) {
            return *min_element(matrix[0].begin(), matrix[0].end());
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<m;j++){
                int l=INT_MAX;
                for(int k=j-1;k<=j+1;k++){
                    if(k>=0 && k<m)l=min(l,matrix[i-1][k]);
                }
                matrix[i][j]+=l;
            }
        }
        return *min_element(matrix[m-1].begin(),matrix[m-1].end());
    }
};
