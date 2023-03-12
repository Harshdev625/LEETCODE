class Solution {
public:
    void dfs(vector<vector<int>>& isconnected,vector<bool>&isvisited,int s,int n){
        if(isvisited[s]==true)return;
        isvisited[s]=true;
        for(int i=0;i<n;i++){
            if(s!=i && isconnected[s][i]==1 && !isvisited[i]){
                dfs(isconnected,isvisited,i,n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=isConnected.size();
        vector<bool>isvisited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!isvisited[i]){
                dfs(isConnected,isvisited,i,n);
                count++;
            }
        }
        return count;
    }
};
