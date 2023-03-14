class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>map;
        for(auto i:roads){
            map[i[0]]++;
            map[i[1]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:map){
            pq.push({i.second,i.first});
        }
        unordered_map<int,int>m;
        while(!pq.empty()){
            m[pq.top().second]=n;
            n--;
            pq.pop();
        }
        long long ans=0;
        for(auto i:roads){
            ans+=m[i[0]];
            ans+=m[i[1]];
        }
        return ans;
    }
};
