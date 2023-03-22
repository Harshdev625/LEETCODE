class Solution {
public:
    int minFlips(string target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int res=0;
        int i=0;
        int n=target.size();
        char cur='0';
        while(i<n){
            if(target[i]!=cur){
                res++;
                cur=target[i];
            }
            i++;
        }
        return res;
    }
};
