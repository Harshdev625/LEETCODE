class Solution {
public:
    int countHomogenous(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long long int n=s.size(),count=1;
        long long int  ans=0;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i])count++;
            else {
                ans+= ((count*(count+1))/2)%1000000007;
                count=1;
            }
        }
        ans+= ((count*(count+1))/2)%1000000007;
        return (int)ans;
    }
};
