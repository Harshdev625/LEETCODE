class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int>z;
            z.push_back(1);
            for(int j=1;j<=i-1;j++){
                z.push_back(ans[i-1][j-1]+ ans[i-1][j]);
            }
            z.push_back(1);
            ans.push_back(z);
        }
        return ans;
    }
};
