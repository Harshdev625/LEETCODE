class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(prices.begin(),prices.end());
        if(prices[0] + prices[1] <=money){
            return money-(prices[0] + prices[1]);
        }
        return money;
    }
};
