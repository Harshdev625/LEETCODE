class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        vector<int>add;
        while(k){
            add.push_back(k%10);
            k/=10;
        }
        reverse(num.begin(),num.end());
        int i=0,j=0;
        vector<int>ans;
        while(i<num.size() || j<add.size() || carry!=0){
            if(i<num.size()){
                carry+=num[i];
                i++;
            }
            if(j<add.size()){
                carry+=add[j];
                j++;
            }
            ans.push_back(carry%10);
            carry/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
