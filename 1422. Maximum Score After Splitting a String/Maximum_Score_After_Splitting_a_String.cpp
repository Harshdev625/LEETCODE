#define vi vector<int>
class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        vi ones(n,0);
        vi zero(n,0);
        if(s[0]=='0')zero[0]++;
        else ones[0]++;
        for(int i=1;i<n;i++){
            if (s[i] == '1') {
                ones[i] = ones[i - 1] + 1;
                zero[i] = zero[i - 1];
            } else {
                ones[i] = ones[i - 1];
                zero[i] = zero[i - 1] + 1;
            }
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,zero[i]+ones[n-1]-ones[i]);
        }
        return ans;
    }
};
