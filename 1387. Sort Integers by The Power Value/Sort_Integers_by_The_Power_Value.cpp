class Solution {
public:
    int f(int n,vector<int>&v){
        if(n==0)return -1;
        if(n<v.size() && v[n]!=-1)return v[n];
        if(n%2)return 1+f(3*n + 1,v);
        return 1+f(n/2,v);
    }
    int getKth(int lo, int hi, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>v(hi+1,-1);
        v[1]=0;
        for(int i=2;i<=hi;i++){
            v[i]=f(i,v);
        }
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=lo;i<=hi;i++){
            pq.push( {v[i],i} );
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans[k-1];
    }
};
