class Solution {
public:
    bool dfs(vector<vector<int>>& graph,int n,vector<int>&visited){
        if(visited[n]==1)return false;
        else if(visited[n]==2)return true;
        visited[n]=1;
        for(int i=0;i<graph[n].size();i++){
            if(!dfs(graph,graph[n][i],visited))return false;
        }
        visited[n]=2;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>ans;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(dfs(graph,i,visited)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
