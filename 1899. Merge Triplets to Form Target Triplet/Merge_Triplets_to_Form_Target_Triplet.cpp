class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>ans={0,0,0};
        int n=triplets.size();
        for(int i=0;i<n;i++){
            if(triplets[i][0]>target[0] || triplets[i][1]>target[1] || triplets[i][2]>target[2])continue;
            else{
                ans[0]=max(ans[0],triplets[i][0]);
                ans[1]=max(ans[1],triplets[i][1]);
                ans[2]=max(ans[2],triplets[i][2]);
            }
        }
        if(ans[0]!=target[0] || ans[1]!=target[1] || ans[2]!=target[2])return false;
        return true;
    }
};
