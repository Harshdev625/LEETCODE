class Solution {
public:
    long long count(vector<int>& piles, int t){
        long long ans = 0;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] % t == 0) ans += piles[i] / t;
            else ans += piles[i] / t + 1;
        }
        return ans;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int r = 1000000000;
        int l = 1;
        int res = r;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(count(piles, mid) <= h){
                res = mid;
                r = mid - 1;
            } else{
                l = mid + 1;
            }
        }
        return res;
    }
};
