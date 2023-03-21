class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int m=mat.size(),n=mat[0].size();
        unordered_map<int,vector<int>>map;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                map[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>res;
        for(int i=0;i<m+n-1;i++){
            int t=map[i].size();
            if(i%2==1)reverse(map[i].begin(),map[i].end());
            for(int j=t-1;j>=0;j--)res.push_back(map[i][j]);
        }
        return res;
    }
};
