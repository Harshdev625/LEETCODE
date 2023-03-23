class Solution {
public:
    void dfs(vector<vector<int>>&v,vector<bool>&visited,int n,vector<int>&a){
        a.push_back(n);
        visited[n]=true;
        for(int i=0;i<v[n].size();i++){
            if(!visited[v[n][i]])dfs(v,visited,v[n][i],a);
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=s.size();
        vector<bool>visited(n,false);
        vector<vector<int>>v(n);
        for(int i=0;i<pairs.size();i++){
            v[pairs[i][0]].push_back(pairs[i][1]);
            v[pairs[i][1]].push_back(pairs[i][0]);
        }
        vector<vector<int>>t;
        for(int i=0;i<n;i++){
            vector<int>a;
            if(!visited[i]){
                dfs(v,visited,i,a);
                if(a.size())t.push_back(a);
            }
        }
        for(int i=0;i<t.size();i++){
            sort(t[i].begin(),t[i].end());
            string b;
            for(int j=0;j<t[i].size();j++){
                b.push_back(s[t[i][j]]);
            }
            if(b.size())sort(b.begin(),b.end());
            for(int j=0;j<t[i].size();j++){
                s[t[i][j]]=b[j];
            }
        }
        return s;
    }
};
