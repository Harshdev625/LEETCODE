class Solution {
public:
    string largestGoodInteger(string num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        bool flag=false;
        string ans="";
        int n= num.size();
        for(int i=2;i<n;i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                if(ans.size()){
                    if(ans[2]<num[i]){
                        ans= num.substr(i-2,3);
                    }
                }
                else ans= num.substr(i-2,3);
            }
        }
        return ans;
    }
};
