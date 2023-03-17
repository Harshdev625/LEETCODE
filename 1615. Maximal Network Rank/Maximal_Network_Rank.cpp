class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>>adjacencylist(n,vector<int>(n,0));
        vector<int>v(n,0);
        int s=roads.size();
        for(int i=0;i<s;i++){
            adjacencylist[roads[i][0]][roads[i][1]]=1;
            adjacencylist[roads[i][1]][roads[i][0]]=1;
            v[roads[i][0]]++;
            v[roads[i][1]]++;
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                res=max(res,v[i]+v[j]-adjacencylist[i][j]);
            }
        }
        return res;
    }
};
