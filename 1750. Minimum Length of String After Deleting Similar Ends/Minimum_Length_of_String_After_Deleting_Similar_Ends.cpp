class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = s.size();
        char c = s[0];
        char d = s[n-1];
        int i=0,j=n-1;
        while(c==d && j>i){
            while(s[i]==c && j>i && s[j]==d){
                i++;
                j--;
            }
            while(s[i]==c && j>i){
                i++;
            }
            while(s[j]==d && j>i){
                j--;
            }
            if(s[i]!=s[j] )return j-i+1;
            if(i==j && s[j]==s[j+1] && s[i]==s[i-1])return 0;
            c= s[i];
            d=s[j];
        }
        cout<<i<<" "<<j<<endl;
        if(i>j)return 0;
        return max(j-i+1,0);
    }
};
