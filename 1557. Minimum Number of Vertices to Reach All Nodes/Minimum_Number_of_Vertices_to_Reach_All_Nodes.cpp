class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>m;
        for(int i=0;i<edges.size();i++){
            if(m[edges[i][0]]==0){
                m[edges[i][0]]=1;
            }
            m[edges[i][1]]=-1;
        }
        vector<int>v;
        for(auto i:m){
            if(i.second==1)v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
