class Solution {
public:
    int count=0;
    int N=0;
    bool check(vector<vector<int>>&Nqueens,int row,int col){
        for(int i=row-1;i>=0 ;i--){
            if(Nqueens[i][col]==1)return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(Nqueens[i][j]==1)return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<N;i--,j++){
            if(Nqueens[i][j]==1)return false;
        }
        return true;
    }
    void Nqueensolver(vector<vector<int>>&Nqueens,int row){
        if(row==N){
            count++;
            return;
        }
        for(int i=0;i<N;i++){
            if(check(Nqueens,row,i)){
                Nqueens[row][i]=1;
                Nqueensolver(Nqueens,row+1);
                Nqueens[row][i]=0;
            }
        }
    }
    int totalNQueens(int n) {
        N=n;
        vector<vector<int>>Nqueens(n,vector<int>(n,0));
        Nqueensolver(Nqueens,0);
        return count;
    }
};
