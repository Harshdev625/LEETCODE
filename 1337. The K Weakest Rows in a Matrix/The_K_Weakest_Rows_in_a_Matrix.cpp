// Approach 1 :
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<k;i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            pq.push({count,i});
        }
        for(int i=k;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count<pq.top().first){
                pq.pop();
                pq.push({count,i});
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//Approach 2 :
// Faster than Approach 1
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<pair<int,int>> x;
        for(int i=0;i<mat.size();i++){
            int sum=accumulate(mat[i].begin(),mat[i].end(),0);
            x.push_back(make_pair(sum,i));
        }
        sort(x.begin(),x.end());
        vector<int> v;
        int m=0;
        for(auto& i:x){
            if(m==k) break;
            v.push_back(i.second);
            m++;
        }
        return v;
    }
};
