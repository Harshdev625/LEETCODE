class Solution {
public:
    int findSpecialInteger(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=v.size();
        int check=n/4+1;
        int count=1;
        for(int i=1;i<n;i++){
            if(count==check)return v[i];
            if(v[i]==v[i-1]){
                count++;
                if(count==check)return v[i];
            }
            else{
                count=1;
            }
        }
        return v[n-1];
    }
};
