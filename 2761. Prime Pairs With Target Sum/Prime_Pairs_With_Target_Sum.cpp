class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>is_prime(n+1,0);
        vector<int>prime;
        for(int i=2;i<n;i++){
            if(is_prime[i])continue;
           else{ 
               prime.push_back(i);
                for(int j=2*i;j<n;j+=i){
                    is_prime[j]=i;
                }
            }
        }
        is_prime[1]=1;
        set<pair<int,int>>s;
        for(int i=0;i<prime.size();i++){
            if(!is_prime[n-prime[i]]){
                int mini =min(prime[i],n-prime[i]);
                int maxi =max(prime[i],n-prime[i]);
                s.insert({mini,maxi});
            }
        }
        vector<vector<int>>res;
        for(auto &i:s){
            res.push_back({i.first, i.second});
        }
        return res;
    }
};
