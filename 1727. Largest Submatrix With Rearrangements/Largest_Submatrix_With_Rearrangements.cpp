class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int m= matrix.size();
        int n= matrix[0].size();
        for(int j=0;j<n;j++){
            for(int i=1;i<m;i++){
                if (matrix[i][j] == 1) {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            sort(matrix[i].begin(),matrix[i].end(),[](int &a,int &b){
                return a>b;
            });
            for(int j=0;j<n;j++){
                ans=max(ans,matrix[i][j]*(j+1));
            }
        }
        return ans;
    }
};
