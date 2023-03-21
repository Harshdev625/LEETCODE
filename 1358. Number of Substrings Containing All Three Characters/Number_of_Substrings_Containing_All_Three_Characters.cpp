class Solution {
public:
    int numberOfSubstrings(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int l=0,r=0;
        int res=0;
        map<char,int>m;
        int n=s.size();
        for(int i=0;i<n;i++){
            m[s[i]]++;
            while(m.size()==3){
                res+=n-i;
                m[s[l]]--;
                if(m[s[l]]==0)m.erase(s[l]);
                l++;
            }
        }
        return res;
    }
};
