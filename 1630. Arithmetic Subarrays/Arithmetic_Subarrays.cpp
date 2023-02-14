class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>v(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(v.begin(),v.end());
            int diff=0;
            if(v.size()>1){
                diff=v[1]-v[0];
            }
            int flag=0;
            for(int i=1;i<v.size()-1;i++){
                if(v[i+1]-v[i]!=diff){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
