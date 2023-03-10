class Solution {
private:
    int getparent(vector<int>&parent,int index){
        while(parent[index]!=index)index=parent[index];
        return index;
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=edges.size();
        vector<int>parent(n);
        for(int i=0;i<n;i++)parent[i]=i;
        vector<int>res;
        int p1,p2;
        int count=0,i=0;
        while(count<n-1){
            p1=getparent(parent,edges[i][0]-1);
            p2=getparent(parent,edges[i][1]-1);
            if(p1!=p2){
                count++;
                parent[p1]=p2;
            }
            else{
                res=edges[i];
            }
            i++;
        }
        if(res.empty())res=edges[i];
        return res;
    }
};
