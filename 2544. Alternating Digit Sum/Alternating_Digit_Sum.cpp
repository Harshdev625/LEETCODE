class Solution {
public:
    int alternateDigitSum(int n) {
        int ans=0;
        int count=1,k;
        while(n){
            k=n%10;
            if(count%2==1){
                ans+=k;
            }
            else{
                ans-=k;
            }
            n/=10;
            count++;
        }
        if(count%2==1){
            ans=-ans;
        }
        return ans;
    }
};
