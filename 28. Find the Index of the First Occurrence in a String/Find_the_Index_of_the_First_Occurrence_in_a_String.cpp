class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0){
            return 0;
        }
        else if(needle.size()>haystack.size()){
            return -1;
        }
        else if(needle.size()==haystack.size()){
            for(int i=0,j=0;i<needle.size() && j<haystack.size();i++,j++){
                if(haystack[i]!=needle[j]){
                    return -1;
                }
            }
            return 0;
        }
        for(int i=0;i<haystack.size();i++){
            int k =i;
            int ans=i;
            for(int j=0;j<needle.size();j++){
                if(haystack[k]!=needle[j]){
                    break;
                }
                if(j==needle.size()-1){
                    return ans;
                }
                k++;
            }
        }
        return -1;
    }
};
