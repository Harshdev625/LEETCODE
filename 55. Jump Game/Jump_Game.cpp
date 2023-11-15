class Solution {
public:
    bool canJump(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=v.size();
        int maxi=v[0];
        for(int i=0; i<n && i<=maxi;i++){
            maxi=max(maxi,i+v[i]);
        }
        return ( maxi>=n-1 ? true : false );
    }
};
