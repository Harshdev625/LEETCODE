class Solution {
public:
    int minOperations(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int cnt1=0,cnt2=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i%2==0 && s[i]=='1')cnt1++;
            else if(i%2==1 && s[i]=='0')cnt1++;
        }
        cnt2=n-cnt1;
        return min(cnt1,cnt2);
    }
};
