class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,n=t.size();
        for(auto &j:s){
            if(t[i]==j)i++;
            if(i==n)break;
        }
        return n-i;
    }
};
