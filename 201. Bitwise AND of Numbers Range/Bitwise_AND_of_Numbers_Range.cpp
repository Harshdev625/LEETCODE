class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(left==right)return right;
        vector<int>num1,num2;
        while(left){
            num1.push_back(left%2);
            left/=2;
        }
        while(right){
            num2.push_back(right%2);
            right/=2;
        }
        if(num1.size()!=num2.size())return 0;
        long long int ans=0;
        for(int i=num1.size()-1;i>=0;i--){
            if(num1[i]==num2[i] ) {if(num1[i]==1)ans+= (1<<i);}
            else break;
        }
        return ans;
    }
};
