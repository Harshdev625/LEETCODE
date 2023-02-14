class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<c;i++){
            vector<int>v;
            for(int j=0;j<r;j++){
                v.push_back(grid[j][i]);
            }
            ans+=*max_element(v.begin(),v.end());
        }
        return ans;                                   
    }
};
