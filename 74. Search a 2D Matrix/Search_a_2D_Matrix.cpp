class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(matrix[i][0]<=target && target<=matrix[i][m-1]){
                int low=0,high=m-1;
                while(high>=low){
                    int mid = low + (high-low)/2;
                    if(matrix[i][mid]==target)return true;
                    else if(matrix[i][mid]<target)low=mid+1;
                    else high=mid-1;
                }
            }
        }
        return false;
    }
};
