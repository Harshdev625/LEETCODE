class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int a=0,b=0,c=0;
        int count=0;
        for(int i=0;i<garbage.size();i++){
            if(garbage[i].find('M')<garbage[i].size()){
                a=i;
            }
            if(garbage[i].find('P')<garbage[i].size()){
                b=i;
            }
            if(garbage[i].find('G')<garbage[i].size()){
                c=i;
            }
            count+=garbage[i].size();
        }
        int t=max(a,max(b,c));
        for(int i=0;i<t;i++){
            if(i<a)
            count+=travel[i];
            if(i<b)
            count+=travel[i];
            if(i<c)
            count+=travel[i];
        }
        return count;
    }
};
