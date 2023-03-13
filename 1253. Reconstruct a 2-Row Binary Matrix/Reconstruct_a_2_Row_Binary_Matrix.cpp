class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int total=accumulate(colsum.begin(),colsum.end(),0);
        vector<vector<int>>v;
        if(total !=(lower+upper))return v;
        int n=colsum.size();
        vector<vector<int>>matrix(2,vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(colsum[i]==2){
                matrix[0][i]=1;
                matrix[1][i]=1;
                lower--;
                upper--;
            }
            else if(colsum[i]==1){
                if(lower>upper){
                    matrix[1][i]=1;
                    lower--;
                }
                else if(lower<=upper){
                    matrix[0][i]=1;
                    upper--;
                }
            }
        }
        if(lower || upper)return v;
        return matrix;
    }
};
