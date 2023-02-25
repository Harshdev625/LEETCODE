class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int maximum=prices[0],minimum=prices[0],ans=0;
        for(int i=1;i<prices.size();i++){
            if(maximum-minimum<=ans)maximum=prices[i];
            else if(prices[i]>maximum)maximum=prices[i];
            if(prices[i]<minimum)minimum=prices[i];
            ans=max(ans,maximum-minimum);
        }
        return ans;
    }
};
