class Solution {
public:
    bool factor(int x,int y){
        return __gcd(x,y)==1;
    }
    vector<string> simplifiedFractions(int n) {
        vector<string>v;
        if(n==1){
            return v;
        }
        for(int i=2;i<=n;i++){
            int t=1;
            while(t%i!=0){
                if(factor(t,i)){
                    string s=to_string(t%i)+"/"+to_string(i);
                    v.push_back(s);
                }
                t++;
            }
        }
        return v;
    }
};
