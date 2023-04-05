class Solution {
public:
    int edgeScore(vector<int>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,long long int>m;
        int ans=edges.size()-1;
        for(int i=0;i<=ans;i++){
            m[edges[i]]+=i;
        }
        long long total=LLONG_MIN;
        for(auto i:m){
            if(i.second>total){
                ans=i.first;
                total=i.second;
            }
            else if(i.second==total){
                if(ans>i.first){
                    ans=i.first;
                }
            }
        }
        return ans;
    }
};
