class Solution {
public:
    void dfs(vector<vector<int>>&adj,vector<bool>&visited,long long& count,int n){
        visited[n]=true;
        count++;
        for(int i=0;i<adj[n].size();i++){
            if(!visited[adj[n][i]]){
                dfs(adj,visited,count,adj[n][i]);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<bool>visited(n,false);
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<long long>res;
        long long count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(adj,visited,count,i);
                res.push_back(count);
                count=0;
            }
        }
        if(res.size()<=1)return 0;
        long long result=0,m=res.size();
        vector<long long>ans=res;
        for(int i=1;i<m;i++)ans[i]+=ans[i-1];
        for(int i=0;i<m-1;i++){
            result+=(res[i])*(ans[m-1]-ans[i]);
        }
        return result;
    }
};
