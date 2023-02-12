class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8){
            return false;
        }
        int flag1=0,flag2=0,flag3=0,flag4=0;
        for(int i=0;i<password.size();i++){
            if(password[i]==password[i+1]){
                return false;
            }
            if(password[i]>='a' && password[i]<='z'){
                flag1=1;
            }
            else if(password[i]>='A' && password[i]<='Z'){
                flag2=1;
            }
            else if(password[i]>='0' && password[i]<='9'){
                flag3=1;
            }
            else{
                flag4=1;
            }
        }
        return flag1==1 && flag2==1 && flag3==1 && flag4==1;
    }
};
