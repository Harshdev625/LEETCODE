class Solution {
public:
    bool count(vector<int>&candies,long long k,long long t){
        long long ans=0;
        for(auto i:candies){
            ans+=i/t;
            if(ans>=k)return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int l=1;
        int r=min(10000000LL,accumulate(candies.begin(),candies.end(),0LL));
        long long ans=0, mid;
        while(r>=l){
            mid= l +(r-l)/2;
            if(count(candies,k,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};
