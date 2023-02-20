class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>m;
        unordered_map<int,int>w;
        vector<vector<int>>ans(2);
        for(int i=0;i<matches.size();i++){
            m[matches[i][0]]++;
            m[matches[i][1]]++;
            w[matches[i][0]]++;
        }
        for(auto i:m){
            if(i.second-w[i.first]==0)ans[0].push_back(i.first);
            if(i.second-w[i.first]==1)ans[1].push_back(i.first);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};
