class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=triangle.size();
        int m=2;
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j>0 && j<m-1){
                    triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
                }
                else if(j==0){
                    triangle[i][j]+=triangle[i-1][0];
                }
                else{
                    triangle[i][j]+=triangle[i-1][m-2];
                }
            }
            m++;
        }
        int min=*min_element(triangle[n-1].begin(),triangle[n-1].end());
        return min;
    }
};
