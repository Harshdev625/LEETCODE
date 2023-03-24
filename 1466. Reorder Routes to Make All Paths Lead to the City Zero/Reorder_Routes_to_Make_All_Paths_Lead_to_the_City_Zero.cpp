class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<pair<int,char>>>v(n);
        vector<bool>visited(n,false);
        for(int i=0;i<n-1;i++){
            v[connections[i][0]].push_back({connections[i][1],'d'});
            v[connections[i][1]].push_back({connections[i][0],'u'});
        }
        int res=0;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int t=q.front();
            q.pop();
            visited[t]=true;
            for(int i=0;i<v[t].size();i++){
                if(!visited[v[t][i].first]){
                    if(v[t][i].second=='d'){
                        res++;
                    }
                    q.push(v[t][i].first);
                }
            }
        }
        return res;
    }
};
