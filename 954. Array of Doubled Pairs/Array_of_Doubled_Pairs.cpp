class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> m;
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<arr.size();i++) {
            if(m[arr[i]] == 0) {
                if(arr[i]%2 == 0)
                    even.push_back(arr[i]);
                else
                    odd.push_back(arr[i]);
            }
            m[arr[i]]++;
        }
        sort(even.begin(), even.end(), [](int a, int b) { return abs(a) < abs(b); });
        sort(odd.begin(), odd.end(), [](int a, int b) { return abs(a) < abs(b); });
        for(int i=0;i<odd.size();i++) {
            if(m[2*odd[i]] >= m[odd[i]]) {
                m[2*odd[i]] -= m[odd[i]];
                m[odd[i]] = 0;
            }
            else {
                return false;
            }
        }
        for(int i=0;i<even.size();i++) {
            if(m[2*even[i]] >= m[even[i]]) {
                m[2*even[i]] -= m[even[i]];
                m[even[i]] = 0;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
