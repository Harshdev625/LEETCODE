class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int ans=1;
        int row = n-1;
        int col = n-1;
        int r,c;
        for(int i=0,j=0;i<=row && j<=col;){
            r=i,c=j;
            while(c<=col){
                matrix[r][c]=ans;
                ans++;
                c++;
            }
            i++;
            r=i;c=col;
            while(r<=row ){
                matrix[r][c]=ans;
                ans++;
                r++;
            }
            col--;
            r=row;c=col;
            while(c>=j && i<=row ){
                matrix[r][c]=ans;
                ans++;
                c--;
            }
            row--;
            r=row,c=j;
            while(r>=i && j<=col ){
                matrix[r][c]=ans;
                ans++;
                r--;
            }
            j++;
        }
        return matrix;
    }
};
