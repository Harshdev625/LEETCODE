class Solution {
public:
    int minDeletions(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int arr[26]={0};
        for(auto &i:s){
            arr[i-'a']++;
        }

        auto cmp = [](pair<char, int> a, pair<char, int> b) {
            return a.second < b.second;
        };
        
        priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(cmp)> pq(cmp);
        for(int i=0;i<26;i++){
            if(arr[i]){
                pq.push({'a'+i,arr[i]});
            }
        }
        int count=0,curr_max=pq.top().second;
        pq.pop();
        while(pq.size()){
            cout<<pq.top().first<<' '<<pq.top().second<< ' '<<count<<' ';
            if(pq.top().second>=curr_max){
                if(curr_max>0)count+=((pq.top().second-curr_max)+1);
                else count+=pq.top().second;
                curr_max-=1;
                curr_max=max(curr_max,0);
            }
            else{
                curr_max=max(pq.top().second,0);
            }
            pq.pop();
        }
        return count;
    }
};
