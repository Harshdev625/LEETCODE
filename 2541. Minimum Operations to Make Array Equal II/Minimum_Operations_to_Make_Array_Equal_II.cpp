class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=nums1.size();
        vector<long long >v;
        for(int i=0;i<n;i++){
            if(nums1[i]!=nums2[i])v.push_back(nums1[i]-nums2[i]);
        }
        if(v.size() && k==0)return -1;
        if(v.size()==0)return 0;
        long long ans=0,cal1=0,cal2=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%k!=0)return -1;
            if(v[i]<0)cal1+=abs(v[i]);
            else cal2+=v[i];
        }
        cout<<cal1<<" "<<cal2<<endl;
        if(cal1!=cal2)return -1;
        return cal1/k;
    }
};
