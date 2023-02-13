class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        int t=sqrt(c);
        for(int i=1;i<=t;i++){
            int l =c-i*i;
            l=sqrt(l);
            if(i*i + l*l == c){
                return true;
            }
        }
        return false;
    }
};
