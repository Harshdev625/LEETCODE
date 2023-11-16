class Solution {
public:
    int getSum(int a, int b) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>v1(32,0);
        vector<int>v2(32,0);
        for(int i=31;i>=0;i--){
            v1[i]=a&1;
            v2[i]=b&1;
            a>>=1;
            b>>=1;
        }
        int carry = 0, sum = 0,ans=0;
        for(int i=31,j=0;i>=0;i--,j++){
            sum = v1[i]^v2[i]^carry;
            carry = (v1[i] & v2[i]) | (carry & (v1[i] ^ v2[i]));
            ans+=(sum<<j);
        }
        return ans;
    }
};
