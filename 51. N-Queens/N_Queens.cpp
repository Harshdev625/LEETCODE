class Solution {
    int a[9][9]={0};
    public:
    bool check(int r, int n, int a[][9],int c){
    for(int j=r-1;j>=0;j--){
        if(a[j][c]==1){
            return false;
        }
    }
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--){
        if(a[i][j]==1){
            return false;
        }
    }
    for(int i=r-1,j=c+1;i>=0 && j<n;i--,j++){
        if(a[i][j]==1){
            return false;
        }
    }
    return true;
}
    void queen(int n, int r,vector<vector<string>>&ans,int a[][9]){
        if(r==n){
            vector<string>s;
            for(int i=0;i<n;i++){
                string s1;
                for(int j=0;j<n;j++){
                    if(a[i][j]==0){
                        s1.push_back('.');
                    }
                    else{
                        s1.push_back('Q');
                    }
                }
                s.push_back(s1);
            }
            ans.push_back(s);
        }
        for(int i=0;i<n;i++){
            a[r][i]=1;
            if(check(r,n,a,i)){
                queen(n,r+1,ans,a);
            }
            a[r][i]=0;
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        queen(n,0,ans,a);
        return ans;
    }
};
