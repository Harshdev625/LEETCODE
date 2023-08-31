class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>v={1,2};
        int last=v.size()-1,second_last=last-1;
        while(v.back()<k){
            v.push_back(v[v.size()-1]+v[v.size()-2]);
        }
        int idx=v.size()-1,count=0;
        while (k>0) {
            while (idx >= 0 && v[idx] > k) {
                idx--;
            }
            if (idx >= 0) {
                k-=v[idx];
                count++;
            }
        }
        return count;
    }
};
