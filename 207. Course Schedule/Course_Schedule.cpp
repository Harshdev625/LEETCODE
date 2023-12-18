#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& edges) {
        int e=edges.size();
        vvi graph(v);
        vi indegree(v);
        int count=0;
        for(int i=0;i<e;i++){
            graph[edges[i][0]].pb(edges[i][1]);
            indegree[edges[i][1]]++;
        }
        queue<int>q;
        for(int i=0;i<v;i++){
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty()){
            int t=q.front();
            for(int i=0;i<graph[t].size();i++){
                indegree[graph[t][i]]--;
                if(indegree[graph[t][i]]==0)q.push(graph[t][i]);
            }
            q.pop();
            count++;
        }
        return count==v;
    }
};
