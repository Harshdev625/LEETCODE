class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int count=piles.size()/3,i=piles.size()-2;
        int ans=0;
        while(count){
            ans+=piles[i];
            i-=2;
            count--;
        }
        return ans;
    }
};
