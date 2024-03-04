class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int ans=0,count=0;
        int i=0,j= tokens.size()-1;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                count++;
                i++;
            }
            else{
                if(count==0)break;
                count--;
                power+=tokens[j];
                j--;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
