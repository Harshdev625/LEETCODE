class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>res;
        vector<int>ans1,ans2;
        unordered_map<int,int>m,n;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            n[nums2[i]]++;
            m[nums2[i]]=0;
        }
        for(int i=0;i<nums1.size();i++){
            n[nums1[i]]=0;
        }
        for(auto &i :m){
            if(i.second)ans1.push_back(i.first);
        }
        for(auto &i :n){
            if(i.second)ans2.push_back(i.first);
        }
        res.push_back(ans1);
        res.push_back(ans2);
        return res;
    }
};
