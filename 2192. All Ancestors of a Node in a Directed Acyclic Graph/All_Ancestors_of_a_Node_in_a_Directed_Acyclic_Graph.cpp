class Solution {
public:
    void dfs(vector<int>&ans,vector<vector<int>>&edgelist,int n,vector<bool>&visited){
        visited[n]=true;
        for(int i=0;i<edgelist[n].size();i++){
            if(!visited[edgelist[n][i]]){
                ans.push_back(edgelist[n][i]);
                dfs(ans,edgelist,edgelist[n][i],visited);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>>edgelist(n);
        for(int i=0;i<edges.size();i++){
            edgelist[edges[i][1]].push_back(edges[i][0]);
        }
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<bool>visited(n,false);
            vector<int>ans;
            dfs(ans,edgelist,i,visited);
            sort(ans.begin(),ans.end());
            v.push_back(ans);
        }
        return v;
    }
};
