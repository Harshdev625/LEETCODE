class Solution {
public:
    int reverse(int n){
        int ans=0,remainder=0;
        while(n){
            remainder=n%10;
            ans=ans*10+remainder;
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
        unordered_map<int,int>map;
        for(auto &i:nums){
            map[i-reverse(i)]++;
        }
        int ans=0;
        long long int t;
        for(auto&i:map){
            t = (1LL*i.second*(i.second-1))/2;
            t=t%1000000007;
            ans+= t;
            ans=ans%1000000007;
        }
        return ans;
    }
};
