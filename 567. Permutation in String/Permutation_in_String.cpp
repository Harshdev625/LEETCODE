class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        int arr[26]={0};
        for(int i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        int brr[26]={0};
        string t=s2.substr(0,s1.size());
        for(int i=0;i<t.size();i++){
            brr[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=brr[i]){
                break;
            }
            if(i==25){
                return true;
            }
        }
        for(int i=1;i<=s2.size()-t.size();i++){
            brr[s2[i - 1] - 'a']--;
            brr[s2[i + t.size() - 1] - 'a']++;
            for(int i=0;i<26;i++){
                if(arr[i]!=brr[i]){
                    break;
                }
                if(i==25){
                    return true;
                }
            }
        }
        return false;
    }
};
