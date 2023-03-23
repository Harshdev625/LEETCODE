class Solution {
public:
    string smallestNumber(string pattern) {
        string res="1";
        char c='2';
        for(int i=0;i<pattern.size();i++){
            res.push_back(c);
            c++;
        }
        int count=0;
        int i=0;
        for(;i<pattern.size();i++){
            if(pattern[i]=='D')count++;
            else{
                if(count!=0){
                    reverse(res.begin()+i-count,res.begin()+i+1);
                    count=0;
                }
            }
        }
        if(count!=0){
            reverse(res.begin()+i-count,res.begin()+i+1);
            count=0;
        }
        return res;
    }
};
