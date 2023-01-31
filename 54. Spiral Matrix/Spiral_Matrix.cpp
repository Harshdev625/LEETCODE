class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        if(matrix.empty()) return v;
        int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        int r,c;
        for(int i=0,j=0;i<=row && j<=col;){
            r=i;c=j;
            while(c<=col){
                v.push_back(matrix[r][c]);
                c++;
            }
            i++;
            r=i;c=col;
            while(r<=row){
                v.push_back(matrix[r][c]);
                r++;
            }
            col--;
            r=row;c=col;
            while(c>=j && i<=row){
                v.push_back(matrix[r][c]);
                c--;
            }
            row--;
            r=row,c=j;
            while(r>=i && j<=col){
                v.push_back(matrix[r][c]);
                r--;
            }
            j++;
        }
        return v;
    }
};
