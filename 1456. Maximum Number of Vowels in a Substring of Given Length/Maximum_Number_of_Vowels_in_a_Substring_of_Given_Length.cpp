class Solution {
public:
    int maxVowels(string s, int k) {
        int arr[26]={0};
        for(int i=0;i<k;i++){
            arr[s[i]-'a']++;
        }
        int maximum=arr[0]+arr[4]+arr[8]+arr[14]+arr[20];
        for(int i=k;i<s.size();i++){
            arr[s[i]-'a']++;
            arr[s[i-k]-'a']--;
            maximum=max(maximum,arr[0]+arr[4]+arr[8]+arr[14]+arr[20]);
        }
        return maximum;
    }
};
