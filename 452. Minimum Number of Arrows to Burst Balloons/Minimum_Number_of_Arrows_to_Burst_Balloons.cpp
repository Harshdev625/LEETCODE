class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        long long int count=1;
        long long max=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]>max){
                max=points[i][1];
                count++;
            }
            else if(points[i][1]<max){
                max=points[i][1];
            }
        }
        return count;
    }
};
