class Solution {
public:
    void dfs(vector<vector<int>>& land,int r,int c,int m,int n,int &x,int &y){
        if(r<0 || c<0 || r>=m || c>=n || land[r][c]==0)return;
        land[r][c]=0;
        x=max(r,x);
        y=max(y,c);
        dfs(land,r+1,c,m,n,x,y);
        dfs(land,r,c+1,m,n,x,y);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>>v;
        int m=land.size(),n=land[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j]){
                    int x=i,y=j;
                    dfs(land,i,j,m,n,x,y);
                    vector<int>res;
                    res.push_back(i);
                    res.push_back(j);
                    res.push_back(x);
                    res.push_back(y);
                    v.push_back(res);
                }
            }
        }
        return v;
    }
};
