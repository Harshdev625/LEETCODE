class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=a.size();
        if(n<=2)return false;
        bool is_peak=false;
        if(a[1]<a[0])return false;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1])return false;
            if(!is_peak && a[i]<a[i-1])is_peak=true;
            else if(is_peak && a[i]>a[i-1])return false;
        }
        return is_peak;
    }
};
