class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=arr.size();
        vector<int>v=arr;
        sort(v.begin(),v.end());
        long long count1=0,count2=0;
        int count=0;
        for(int i=0;i<n;i++){
            count2+=arr[i];
            count1+=v[i];
            if(count1==count2)count++;
        }
        return count;
    }
};
