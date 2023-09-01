class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,long long int>m;
        vector<int>power_2;
        int t=1;
        for(int i=0;i<=21;i++){
            power_2.push_back(t);
            t<<=1;
        }
        for(auto &i:deliciousness){
            m[i]++;
        }
        long long int ans=0,calc;
        for(auto & i:m){
            for(int j=0;j<=21;j++){
                t=power_2[j]-i.first;
                if(t<0)continue;
                else{
                    if(m.count(t) && t>=i.first){
                        if(i.first==t){
                            calc=(m[t]*(m[t]-1))/2;
                            ans+=calc;
                            ans%=1000000007;
                        }
                        else{
                            calc=(m[t]*(m[i.first]));
                            ans+=calc;
                            ans%=1000000007;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
