class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int s=0,e=arr.size()-1,mid;
        while(e>s){
            mid=(s+e)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])return mid;
            else if(arr[mid]<arr[mid+1] && arr[mid-1]<arr[mid])s++;
            else e--;
        }
        return 0;
    }
};
