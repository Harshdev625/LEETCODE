class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>m;
        for(int i=0;i<cpdomains.size();i++){
            int j=0,t=cpdomains[i].size();
            int num=0;
            while(cpdomains[i][j]!=' '){
                j++;
            }
            num=stoi(cpdomains[i].substr(0,j));
            string a=cpdomains[i].substr(j+1);
            m[a]+=num;
            for(int k=0;k<a.size();k++){
                if(a[k]=='.'){
                    m[a.substr(k+1)]+=num;
                }
            }
        }
        vector<string>ans;
        for(auto i:m){
            ans.push_back(to_string(i.second)+" "+i.first);
        }
        return ans;
    }
};
