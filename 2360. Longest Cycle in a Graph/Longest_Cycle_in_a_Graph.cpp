class Solution {
public:
    int dfs(vector<vector<int>>&v,vector<bool>&visited,int n,set<int>&s){
        visited[n] = true;
        s.insert(n);
        for (int i = 0; i < v[n].size(); i++) {
            if (s.find(v[n][i]) != s.end()) return n;
            if (!visited[v[n][i]]) {
                int res = dfs(v, visited, v[n][i], s);
                if (res != -1) return res;
            }
        }
        s.erase(n);
        return -1;
    }

    int longestCycle(vector<int>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = edges.size();
        int ans = -1;
        vector<bool> visited(n, false);
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++) {
            if (edges[i] != -1) v[edges[i]].push_back(i);
        }
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                set<int> s;
                int res = dfs(v, visited, i, s);
                if (res != -1) {
                    int count = 1;
                    int t = i;
                    while (i != edges[t]) {
                        count++;
                        t = edges[t];
                    }
                    ans = max(ans, count);
                }
            }
        }
        return ans;
    }
};
