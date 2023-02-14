class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maximum=1;
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]-s[i-1]==1)count++;
            else{
                maximum=max(maximum,count);
                count=1;
            }
        }
        if(count!=1)maximum=max(maximum,count);
        return maximum;
    }
};
