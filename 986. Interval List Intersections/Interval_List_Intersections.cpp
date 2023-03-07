class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> ans;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()){
            if(a[i][1]<b[j][0])i++;
            else if(b[j][1]<a[i][0])j++;
            else{
                vector<int>v={max(a[i][0],b[j][0]),min(a[i][1],b[j][1])};
                ans.push_back(v);
                if(a[i][1]<b[j][1])i++;
                else j++;
            }
        }
        return ans;
    }
};
