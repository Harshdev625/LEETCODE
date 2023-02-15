class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int flag=0;
        int l=newInterval[0],r=newInterval[1];
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][1]<l){
                ans.emplace_back(intervals[i]);
            }
            else if(intervals[i][0]>r){
                if(!flag){
                    ans.push_back({l,r});
                    flag=1;
                }
                ans.emplace_back(intervals[i]);
            }
            else{
                l=min(l,intervals[i][0]);
                r=max(r,intervals[i][1]);
            }
        }
        if(flag==0){
            ans.push_back({l,r});
        }
        return ans;
    }
};
