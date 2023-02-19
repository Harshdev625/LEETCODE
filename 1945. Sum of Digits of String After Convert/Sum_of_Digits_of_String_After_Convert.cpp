class Solution {
public:
    int getLucky(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string a;
        for(int i=0;i<s.size();i++){
            a+=to_string(s[i]-'a'+1);
        }
        for(int i=0;i<k;i++){
            int sum=0;
            for(int j=0;j<a.size();j++)sum+=a[j]-'0';
            a=to_string(sum);
        }
        return stoi(a);
    }
};
