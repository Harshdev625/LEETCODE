class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=nums.size();
        vector<int>v1,v2;
        v1.push_back(nums[0]);
        v2.push_back(nums[0]);
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                count++;
                if(count==2)return false;
                v1.pop_back();
                v1.push_back(nums[i]);
            }
            else{
                v1.push_back(nums[i]);
                v2.push_back(nums[i]);
            }
        }
        bool flag1=true,flag2=true;
        for(int i=1;i<n-1;i++){
            if(v1[i]<=v1[i-1]){
                flag1=false;
                break;
            }
        }
        for(int i=1;i<n-1;i++){
            if(v2[i]<=v2[i-1]){
                flag2=false;
                break;
            }
        }
        return flag1 | flag2;
    }
};
