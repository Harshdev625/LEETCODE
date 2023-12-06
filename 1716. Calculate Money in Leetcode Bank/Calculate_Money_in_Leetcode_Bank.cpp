class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>v={1,2,3,4,5,6,7};
        for(int i=1;i<=n;i++){
            ans+=v[(i-1)%7];
            if(i%7==0)for(int j=0;j<7;j++)v[j]+=1;
        }
        return ans;
    }
};
