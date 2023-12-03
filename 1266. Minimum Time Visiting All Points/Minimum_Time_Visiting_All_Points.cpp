class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n= points.size();
        int ans=0;
        for(int i=1;i<n;i++){
            ans+=max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
        }
        return ans;
    }
};
