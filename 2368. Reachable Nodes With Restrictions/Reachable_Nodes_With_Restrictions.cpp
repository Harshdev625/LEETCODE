class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<bool>isvisited(n,false);
        for(int i=0;i<restricted.size();i++){
            isvisited[restricted[i]]=true;
        }
        vector<vector<int>>adjacencylist(n);
        for(int i=0;i<edges.size();i++){
            adjacencylist[edges[i][0]].push_back(edges[i][1]);
            adjacencylist[edges[i][1]].push_back(edges[i][0]);
        }
        int count=1;
        queue<int>q;
        q.push(0);
        int t;
        while(!q.empty()){
            t=q.front();
            q.pop();
            isvisited[t]=true;
            for(int i=0;i<adjacencylist[t].size();i++){
                if(!isvisited[adjacencylist[t][i]]){
                    count++;
                    q.push(adjacencylist[t][i]);
                }
            }
        }
        return count;
    }
};
