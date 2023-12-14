#define vi vector<int> 
class Solution {
public:
    bool isPalindrome(int i, int j, string &s) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int minCut(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=s.size();
        vi dp(n+1,0);
        for (int i = n-1; i >=0; i--) {
            int mini = INT_MAX;
            for(int k=i;k<n;k++){
                if(isPalindrome(i,k,s)){
                    mini=min(mini,1+dp[k+1]);
                }
            }
            dp[i]= mini;
        }
        return dp[0]-1;
    }
};
