class Solution {
public:
    int minSteps(string s, string t) {
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<s.size();i++){
            arr1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            arr2[t[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            count+=abs(arr1[i]-arr2[i]);
        }
        return count/2;
    }
};
