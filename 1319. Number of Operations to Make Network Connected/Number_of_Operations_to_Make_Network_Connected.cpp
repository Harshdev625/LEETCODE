class Solution {
public:
    void dfs(vector<vector<int>>&adjacencylist,vector<bool>&isvisited,int n){
        isvisited[n]=true;
        for(int i=0;i<adjacencylist[n].size();i++){
            if(!isvisited[adjacencylist[n][i]]){
                dfs(adjacencylist,isvisited,adjacencylist[n][i]);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int size=connections.size();
        if(size<n-1)return -1;
        vector<vector<int>>adjacencylist(n);
        vector<bool>isvisited(n,false);
        for(int i=0;i<size;i++){
            adjacencylist[connections[i][0]].push_back(connections[i][1]);
            adjacencylist[connections[i][1]].push_back(connections[i][0]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!isvisited[i]){
                dfs(adjacencylist,isvisited,i);
                count++;
            }
        }
        return count-1;
    }
};
