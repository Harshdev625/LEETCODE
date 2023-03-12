class Solution {
public:
    int n=0;
    int findmindistance(vector<int>&distance,vector<bool>&visited){
        int index=-1,d=INT_MAX;
        for(int i=0;i<n;i++){
            if(!visited[i] && (distance[i]<d) ){
                index=i;
                d = distance[i];
            }
        }
        return index;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        n=points.size();
        vector<bool>visited(n,false);
        vector<int>parent(n,-1);
        vector<int>distance(n,INT_MAX);
        distance[0]=0;
        int res=0;
        vector<int>v=points[0];
        for(int i=0;i<n;i++){
            int index=findmindistance(distance,visited);
            visited[index]=true;
            for(int j=0;j<n;j++){
                if(!visited[j]){
                    if(distance[j]>(abs(points[j][0]-points[index][0])+abs(points[j][1]-points[index][1]))){
                        distance[j]=abs(points[j][0]-points[index][0])+abs(points[j][1]-points[index][1]);
                        parent[j]=index;
                    }
                }
            }
        }
        for(int i=1;i<n;i++)res+=distance[i];
        return res;
    }
};
