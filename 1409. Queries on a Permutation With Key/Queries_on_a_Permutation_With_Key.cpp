class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>map1;
        unordered_map<int,int>map2;
        for(int i=0;i<m;i++)map1[i]=i+1;
        for(int i=1;i<=m;i++)map2[i]=i-1;
        int n= queries.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(map2[queries[i]]);
            for (int j=map2[queries[i]];j>0;j--) {
                map1[j]=map1[j - 1];
            }
            map1[0]=queries[i];
            for (int k=0;k<m;k++) {
                map2[map1[k]]=k;
            }
        }
        return ans;
    }
};
