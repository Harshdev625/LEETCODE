class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=rowSum.size(),m=colSum.size();
        vector<vector<int>>matrix(n,vector<int>(m,0));
        int i=0,j=0;
        while(i<n && j<m){
            if(rowSum[i]<=colSum[j]){
                matrix[i][j]=rowSum[i];
                colSum[j]-=rowSum[i];
                i++;
            }
            else{
                matrix[i][j]=colSum[j];
                rowSum[i]-=colSum[j];
                j++;
            }
        }
        return matrix;
    }
};
