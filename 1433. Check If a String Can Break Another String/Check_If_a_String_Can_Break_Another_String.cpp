class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s1.size();
        bool flag=true;
        for(int i=0;i<n;i++){
            if(s1[i]>s2[i]){
                flag=false;
                break;
            }
        }
        if(flag)return flag;
        flag=true;
        for(int i=0;i<n;i++){
            if(s1[i]<s2[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
