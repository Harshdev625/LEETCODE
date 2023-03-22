class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>res(n+1,0);
        for(int i=0;i<bookings.size();i++){
            res[bookings[i][0]-1]+=bookings[i][2];
            res[bookings[i][1]]-=bookings[i][2];
        }
        for(int i=1;i<=n;i++)res[i]+=res[i-1];
        res.pop_back();
        return res;
    }
};
