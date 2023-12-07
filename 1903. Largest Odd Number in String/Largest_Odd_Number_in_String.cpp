class Solution {
public:
    string largestOddNumber(string num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0') %2==1){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};
