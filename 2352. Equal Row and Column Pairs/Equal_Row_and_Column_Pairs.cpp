class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,pair<int,int>>m;
        for(int i=0;i<grid.size();i++){
            vector<int>v(grid[i].begin(),grid[i].end());
            m[v].first++;
        }
        for(int i=0;i<grid.size();i++){
            vector<int>v;
            for(int j=0;j<grid[i].size();j++){
                v.push_back(grid[j][i]);
            }
            m[v].second++;
        }
        int ans=0;
        for(auto i:m){
            ans+=(i.second.first)*(i.second.second);
        }
        return ans;
    }
};
