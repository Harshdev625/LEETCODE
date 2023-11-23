class Solution {
public:
    string removeDigit(string number, char digit) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<string>v;
        int n=number.size();
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                v.push_back(number.substr(0,i)+ number.substr(i+1));
            }
        }
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            if (a.size() > b.size()) return true;
            for (int i = 0; i < a.size(); i++) {
                if (a[i]-'0' > b[i]-'0') return true;
                else if (a[i]-'0' < b[i]-'0') return false;
            }
            return false;
        });
        for(auto &i:v){
            cout<<i<<endl;
        }
        return v[0];
    }
};
