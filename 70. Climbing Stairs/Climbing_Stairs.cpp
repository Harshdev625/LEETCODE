class Solution {
public:
    int climbStairs(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(n<=1)return 1;
        int a=1,b=1,res;
        for(int i=2;i<=n;i++){
            res=a+b;
            a=b;
            b=res;
        }
        return res;
    }
};
