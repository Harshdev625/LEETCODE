class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=arr.size();
        vector<int>v(n,0);
        int count =0;
        for(int i=0;i<n;i++){
            v[arr[i]]=1;
            bool all_present=true;
            for(int j=0;j<=i;j++){
                if(!v[j])all_present=false;
            }
            if(all_present)count++;
        }
        return count;
    }
};
