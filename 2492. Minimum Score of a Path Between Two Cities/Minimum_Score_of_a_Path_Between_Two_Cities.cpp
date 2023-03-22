class Solution {
public:
    void dfs(vector<vector<pair<int,int>>>& adj, vector<bool>& visited, int n) {
        visited[n] = true;
        for (int i = 0; i < adj[n].size(); i++) {
            if (!visited[adj[n][i].first]) {
                dfs(adj, visited, adj[n][i].first);
            }
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<pair<int,int>>> adj(n + 1);
        int res = INT_MAX;
        for (int i = 0; i < roads.size(); i++) {
            adj[roads[i][0]].push_back({ roads[i][1], roads[i][2] });
            adj[roads[i][1]].push_back({ roads[i][0], roads[i][2] });
        }
        vector<bool> visited(n + 1, false);
        dfs(adj, visited, 1);
        for(int i=1;i<n+1;i++){
            if(visited[i]){
                for(int j=0;j<adj[i].size();j++){
                    res = min(res, adj[i][j].second);
                }
            }
        }
        return res;
    }
};
