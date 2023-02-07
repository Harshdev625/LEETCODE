class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0){
            return 0;
        }
        int ans=0;
        stringstream a(s);
        while(a>>s){
            ans++;
        }
        return ans;
    }
};
