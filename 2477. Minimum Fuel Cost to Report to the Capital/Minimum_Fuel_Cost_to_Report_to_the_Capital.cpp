class Solution {
public:
    long long ans=0;
    int helper(vector<vector<int>>& v, vector<bool>& visited, int seats, int n) {
        visited[n] = true;
        int count = 1;
        for (int i = 0; i < v[n].size(); i++) {
            if (!visited[v[n][i]]) {
                count+=helper(v, visited, seats, v[n][i]);
            }
        }
        if(n!=0)ans += ceil((double) count / seats);
        return count;
    }

    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n = roads.size() + 1;
        vector<vector<int>> v(n);
        for (int i = 0; i < n - 1; i++) {
            v[roads[i][0]].push_back(roads[i][1]);
            v[roads[i][1]].push_back(roads[i][0]);
        }
        vector<bool> visited(n, false);
        helper(v, visited, seats, 0);
        return ans;
    }
};
